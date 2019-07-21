#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *parent;
    mylist *left;
    mylist *right;
} node;
node *createnode(int item)
{
    node *temp;
    temp=new node;
    if(temp==NULL)
    {
        cout<< "cannot create the node."<<endl;
    }
    else
    {
        temp->data=item;
        temp->parent=NULL;
        temp->left=NULL;
        temp->right=NULL;
    }
    return temp;
}
void add_left(node *root,node *temp)
{
    root->left=temp;
    if(temp !=NULL)
    {
        temp->parent=root;
    }
}
void add_right(node *root,node *temp)
{
    root->right=temp;
    if(temp !=NULL)
    {
        temp->parent=root;
    }
}
node *insertbst(node *root,node *temp)
{
    node *parent_node,*current_node;
    if(root==NULL)
    {
        root=temp;
        return root;
    }
    parent_node=NULL;
    current_node=root;
    while(current_node !=NULL)
    {
        parent_node=current_node;
        if(temp->data<current_node->data)
        {
            current_node=current_node->left;
        }
        else
            current_node=current_node->right;
    }
    if(parent_node->data> temp->data)
        add_left(parent_node,temp);
    else
        add_right(parent_node,temp);

    return root;
}
node *createbst()
{
    node *temp,*root;
    int ar[]= {5,17,3,7,12,19,1,4};
    root=createnode(10);
    for(int i=0; i<8; i++)
    {
        temp=createnode(ar[i]);
        root=insertbst(root,temp);
    }
    return root;
}
void inorder(node *root)
{
    node *temp=root;

    if(temp->left !=NULL)
        inorder(temp->left);
    cout<< temp->data<< " ";
    if(temp->right !=NULL)
        inorder(temp->right);
}
node *bstsearch(node *root,int item)
{
    node *temp=root;
    while(temp !=NULL)
    {
        if(temp->data==item)
        {
            return temp;
        }
        else if(temp->data>item)
        {
            temp=temp->left;
        }
        else
            temp=temp->right;
    }
    return temp;
}
node *findsmall(node *temp)
{
    node *t=temp;
    while(t->left!=NULL)
    {
        t=t->left;
    }
    return t;
}
node *transplant(node *root,node *currentnode,node *newnode)
{
    if(currentnode==root)
    {
        root=newnode;
    }
    else if(currentnode==currentnode->parent->left)
    {
        add_left(currentnode->parent,newnode);
    }
    else
        add_right(currentnode->parent,newnode);
    return root;
}
node *deletebst(node *root,node *NODE)
{
    node *smallest;
    if(NODE->left==NULL)
    {
        root=transplant(root,NODE,NODE->right);
    }
    else if(NODE->right==NULL)
    {
        root=transplant(root,NODE,NODE->left);
    }
    else
    {
        smallest=findsmall(NODE->right);
        if(smallest->parent !=NODE)
        {
           root=transplant(root,smallest,smallest->right);
           add_right(smallest,NODE->right);
        }
        root=transplant(root,NODE,smallest);
        add_left(smallest,NODE->left);
    }
    delete NODE;
    return root;
}
int main()
{
    node *root=createbst();
    node *temp;
    cout<< "bst: "<<endl;
    inorder(root);
    cout<<endl;
    temp=bstsearch(root,1);
    if(temp !=NULL)
    {
        cout<< "will delete: "<< temp->data<<endl;
        root=deletebst(root,temp);
        cout<< "bst: "<<endl;
        inorder(root);
        cout<<endl;
    }
    else
    {
        cout<< "not found"<<endl;
    }
        temp=bstsearch(root,10);
    if(temp !=NULL)
    {
        cout<< "will delete: "<< temp->data<<endl;
        root=deletebst(root,temp);
        cout<< "bst: "<<endl;
        inorder(root);
        cout<<endl;
    }
    else
    {
        cout<< "not found"<<endl;
    }


    return 0;
}

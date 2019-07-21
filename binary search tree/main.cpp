#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *parent;
    mylist *left;
    mylist *right;

}node;
//node *root=NULL;
node *createnode(int item)
{
    node *temp;
    temp=new node;
    if(temp==NULL)
    {
        cout<< "can not create any node."<<endl;
    }
    else
    {
        temp->data=item;
        temp->parent=temp->left=temp->right=NULL;
    }
}
void add_left(node *root,node *child)
{
    root->left=child;
    if(child !=NULL)
        child->parent=root;
}
void add_right(node *root,node *child)
{
    root->right=child;
    if(child !=NULL)
    {
        child->parent=root;
    }
}
node *bst_insert(node *root,node *temp)
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
        current_node=current_node->left;
       else
        current_node=current_node->right;
   }
   if(temp->data<parent_node->data)
    add_left(parent_node,temp);
   else
    add_right(parent_node,temp);
 return root;
}
node *create()
{
    node *root,*temp;
    int i;
    int ar[]={5,17,3,7,12,19,1,4};
    root=createnode(10);
    for(int i=0; i<8; i++)
    {
        temp=createnode(ar[i]);
        root=bst_insert(root,temp);
    }
    return root;
}
void preorder(node *temp)
{
    cout<< temp->data<< " ";
    if(temp->left!=NULL)
    {
    preorder(temp->left);
    }
    if(temp->right!=NULL)
    {
     preorder(temp->right);
    }
}
void inorder(node *temp)
{
    if(temp->left!=NULL)
        inorder(temp->left);
    cout<< temp->data<< " ";
    if(temp->right !=NULL)
        inorder(temp->right);
}
node *search(node *temp,int item)
{
    node *t=temp;
    while(t!=NULL)
    {
        if(t->data==item)
            return t;
        if(item<t->data)
        t=t->left;
        else
            t=t->right;

    }
    return t;
}
int main()
{
   node *root=create();
   preorder(root);
   cout<<endl;
   inorder(root);
   cout<<endl;
   node *p=NULL;
   p=search(root,44);
   if(p !=NULL)
   cout<< "the data is: "<< p->data<<endl;
   else

      cout<< "item is not found"<<endl;
    return 0;
}

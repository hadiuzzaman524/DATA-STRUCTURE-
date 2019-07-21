#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
}node;
node *root=NULL;
node *createnode(int item)
{
    node *p;
    p=new node;
    if(p==NULL)
        cout<< "the node is not create."<<endl;
    else
    {
        p->data=item;
        p->left=p->right=NULL;

    }
    return p;
}
void add_left(node *root,node *child)
{
    root->left=child;
}
void add_right(node *root,node *child)
{
    root->right=child;
}
node *create_tree()
{
    node *eight=createnode(8);
    node *five=createnode(5);
    node *three=createnode(3);
    node *four=createnode(4);
    node *nine=createnode(9);
    node *seven=createnode(7);
    node *two=createnode(2);
    add_left(eight,five);
    add_right(eight,three);
    add_left(five,four);
    add_right(five,nine);
    add_left(three,seven);
    add_right(three,two);
    return eight;
}
void preorder(node *root)
{  cout<< "preorder traverse result is: ";
    node *p=root;
    stack< node *> st;
    st.push(p);
    node *var;
   while(!st.empty())
   { var=st.top();
   st.pop();
   cout<< var->data<< " ";
   if(var->right)
    st.push(var->right);
   if(var->left)
    st.push(var->left);


   }
   cout<<endl;
}
void inorder(node *root)
{
    cout<< "inorder traverse result is: ";
    node *p=root;
    node *item;
    stack <node *> st;
    while(p!=NULL|| !st.empty())
    {
        while(p!=NULL)
        {
            st.push(p);
            p=p->left;

        }
        p=st.top();
        st.pop();
        cout<< p->data<< " ";
        p=p->right;
    }
    cout<<endl;
}
void postorder(node *root)
{
    cout<< "post order traverse: ";
    stack <node *>st1;
    stack <node *>st2;
    node *temp=root;
    st1.push(temp);
    while(!st1.empty())
    {
        node *p=st1.top();
        st2.push(p);
        st1.pop();
        if(p->left)
            st1.push(p->left);
        if(p->right)
            st1.push(p->right);
    }
    while(!st2.empty())
    {
        node *m=st2.top();
        cout<< m->data<< " ";
        st2.pop();

    }
    cout<<endl;
}
int countnode(node *root)
{
    node *p=root;
    int x,y;
    if(p!=NULL)
    {
        x=countnode(p->left);
        y=countnode(p->right);
        return x+y+1;
    }
    return 0;
}
int internal(node *temp)
{
    node *p=temp;
    int x,y;
    if(p!=NULL)
    {
        x=internal(p->left);
        y=internal(p->right);
        if(p->left&&p->right)
            return x+y+1;
        else
            return x+y;
    }
}
int external(node *root)
{
    node *temp=root;
    int x,y;
    if(temp !=NULL)
    {
        x=external(temp->left);
        y=external(temp->right);
        if(temp->left==NULL&&temp->right==NULL)
        {
            return x+y+1;
        }
        return x+y;
    }
}
int main()
{
    node *root=create_tree();
    preorder(root);
    inorder(root);
    postorder(root);
    cout<< "total node: "<< countnode(root)<<endl;
    cout<< "total internal node: "<< internal(root)<<endl;
    cout<< "total external or leaf node is: "<< external(root)<<endl;
    return 0;
}

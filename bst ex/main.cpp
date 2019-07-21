#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    int height;
};
int max(int a,int b)
{
    return (a>b)?a:b;
}
int height(node *temp)
{
    if(temp==NULL)
        return 0;
    return temp->height;
}
node *newnode(int item)
{
    node *temp=new node();
    temp->data=item;
    temp->right=NULL;
    temp->left=NULL;
    temp->height=1;
    return (temp);
}
node *rightrotate(node *temp)
{
    node *x=temp->left;
    node *m=x->right;
    x->right=temp;
    temp->left=m;
    temp->height=max(height(temp->left),height(temp->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}
node *leftrotate(node *temp)
{
    node *x=temp->right;
    node *m=x->left;
    x->left=temp;
    temp->right=m;
    temp->height=max(height(temp->left),height(temp->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}
int getbalance(node *n)
{
    if(n==NULL)
        return 0;
    return height(n->left)-height(n->right);
}
node *insert(node *temp,int key)
{
    if(temp==NULL)
        return (newnode(key));
    if(key<temp->data)
        temp->left=insert(temp->left,key);
    if(key>temp->data)
        temp->right=insert(temp->right,key);
    else
        return temp;
        temp->height=max(height(temp->left),height(temp->right))+1;
    int balance=getbalance(temp);
    if(balance>1&&key<temp->left->data)
        return rightrotate(temp);
    if(balance<-1&&key>temp->right->data)
        return leftrotate(temp);
    if(balance>1&&key>temp->left->data)
    {
         temp->left=leftrotate(temp->left);
         return rightrotate(temp);
    }
    if(balance<-1&&key<temp->right->data)
    {
        temp->right=rightrotate(temp->right);
        return leftrotate(temp);
    }
       return temp;

}
void inorder(node *temp)
{
    if(temp !=NULL)
    {
        inorder(temp->left);
        cout<< temp->data<< " ";
        inorder(temp->right);
    }
}
int main()
{
   node *root=NULL;
   root=insert(root,8);
   root=insert(root,9);
   root=insert(root,15);
   root=insert(root,1);
   root=insert(root,98);
   root=insert(root,156);
   root=insert(root,24);
   inorder(root);
    return 0;
}

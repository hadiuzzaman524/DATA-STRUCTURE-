#include <iostream>

using namespace std;
typedef struct mylist
{
    int val;
    mylist *left;
    mylist *right;
    int ht;
} node;
int max(int a,int b)
{
    return (a>b)? a:b;
}
int height(node *temp)
{
    if(temp==NULL)
        return 0;
    return temp->ht;
}
node *newnode(int item)
{
    node *temp;
    temp=new node;

    temp->val=item;
    temp->left=NULL;
    temp->right=NULL;
    temp->ht=1;
    return temp;
}
node *rightrotate(node *temp)
{
    node *x=temp->left;
    node *m=x->right;
    x->right=temp;
    temp->left=m;
    temp->ht=max(height(temp->left),height(temp->right))+1;
    x->ht=max(height(temp->left),height(temp->right))+1;
    return x;
}
node *leftrotate(node *temp)
{
    node *x=temp->right;
    node *m=x->left;
    x->left=temp;
    temp->right=m;
    temp->ht=max(height(temp->left),height(temp->right))+1;
    x->ht=max(height(temp->left),height(temp->right))+1;
    return x;
}
int isbalance(node *temp)
{
    if(temp==NULL)
        return 0;
    return height(temp->left)-height(temp->right);
}
node *insert(node *root,int key)
{
    if(root==NULL)
        return (newnode(key));
    if(key<root->val)
    {
        root->left=insert(root->left,key);
    }
    else if(key>root->val)
    {
        root->right=insert(root->right,key);
    }
    else
        return root;
    root->ht=max(height(root->left),height(root->right))+1;
    int balance=isbalance(root);
    if(balance>1&&key<root->left->val)
    {
        return rightrotate(root);
    }
    if(balance<-1&&key>root->right->val)
    {
        return leftrotate(root);
    }
    if(balance>1&&key>root->left->val)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1&&key<root->right->val)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;

}

int main()
{
    node *root=NULL;
    root=insert(root,8);
    root= insert(root,9);
    root=insert(root,2);
    root= insert(root,13);
    root= insert(root,4);
    return 0;
}

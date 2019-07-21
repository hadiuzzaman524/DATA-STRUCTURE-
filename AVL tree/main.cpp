#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
    int height;
} node;
int max(int a,int b)
{
    return (a>b)? a:b;
}
int height(node *temp)
{
    if(temp==NULL)
        return 0;
    return temp->height;
}
node *newnode(int item)
{
    node *temp;
    temp=new node;

    temp->data=item;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
}
int isbalance(node *temp)
{
    if(temp==NULL)
        return 0;
        return height(temp->left)-height(temp->right);
}
node *rightrotate(node *temp)
{
    node *x=temp->left;
    node *m=x->right;
    x->right=temp;
    temp->left=m;
    temp->height=max(height(temp->left),height(temp->right))+1;
    x->height=max(height(temp->left),height(temp->right))+1;
    return x;
}
node *leftrotate(node *temp)
{
    node *x=temp->right;
    node *m=x->left;
    x->left=temp;
    temp->right=m;
    temp->height=max(height(temp->left),height(temp->right))+1;
    x->height=max(height(temp->left),height(temp->right))+1;
    return x;
}
node *insert(node *root,int key)
{
    if(root==NULL)
        return (newnode(key));
    if(key<root->data)
    {
        root->left=insert(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=insert(root->right,key);
    }
    else
        return root;
    root->height=max(height(root->left),height(root->right))+1;
    int balance=isbalance(root);
    if(balance>1&&key<root->left->data)
    {
        return rightrotate(root);
    }
    if(balance<-1&&key>root->right->data)
    {
        return leftrotate(root);
    }
    if(balance>1&&key>root->left->data)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1&&key<root->right->data)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;

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
node *minnode(node *temp)
{
    node *x=temp;
    while(x->left !=NULL)
        x=x->left;
    return x;
}
node *deletenode(node *root,int key)
{
    if(root==NULL)
        return root;
    if(key<root->data)
     root->left=deletenode(root->left,key);
   else if(key>root->data)
        root->right=deletenode(root->right,key);
    else
    {
        if((root->left==NULL)||(root->right==NULL))
        {
            node *temp=root->left?root->left:root->right;
            if(temp==NULL)
            {
                temp=root;
                root=NULL;
            }
            else
                *root=*temp;
            free(temp);
        }
        else
        {
            node *temp=minnode(root->right);
            root->data=temp->data;
            root->right=deletenode(root->right,temp->data);

        }

    }
    if(root=NULL)
        return root;
    root->height=max(height(root->left),height(root->right))+1;
        int balance=isbalance(root);
    if(balance>1&&key<root->left->data)
    {
        return rightrotate(root);
    }
    if(balance<-1&&key>root->right->data)
    {
        return leftrotate(root);
    }
    if(balance>1&&key>root->left->data)
    {
        root->left=leftrotate(root->left);
        return rightrotate(root);
    }
    if(balance<-1&&key<root->right->data)
    {
        root->right=rightrotate(root->right);
        return leftrotate(root);
    }
    return root;

}
int main()
{
    node *root=NULL;
    root=insert(root,7);
    root=insert(root,33);
    root=insert(root,13);
    root=insert(root,66);
    root=insert(root,55);
    root=insert(root,32);
    root=insert(root,78);
    root=insert(root,37);
    root=insert(root,270);
    root=insert(root,70);
    root=insert(root,117);
    root=insert(root,73);
    inorder(root);
    cout<<endl;
    root=deletenode(root,7);
    inorder(root);
    return 0;
}

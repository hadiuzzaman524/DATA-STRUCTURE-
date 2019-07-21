#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *right;
    mylist *left;
}node;
node *head=0;
void insertt(node *s,int data)
{
    s=new node;
    s->right=NULL;
    s->data=data;
    s->left=NULL;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        node *p;
        p=head;
        while(p->right !=NULL)
        {
            p=p->right;
        }
        p->right=s;
        s->left=p;

    }
}
void display(node *s)
{
    while(s !=NULL)
    {
        cout<< s->data<< ' ';
        s=s->right;
    }
    cout<<endl;
}
void length(node *s)
{
    int coutt=0;
    while(s !=NULL)
    {
        coutt++;
        s=s->right;
    }
    cout<< coutt<<endl;
}
void deletenode(node *s,int data)
{
    while(s->data !=data)
    {

        s=s->right;
    }
    node *next,*prev;
    next=s->right;
    prev=s->left;
    next->left=prev;
    prev->right=next;
    free(s);
}
void first(node *s,int data)
{
    s=new node;
    s->right=NULL;
    s->data=data;
    s->left=NULL;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        s->right=head;
        head->left=s;
        head=s;
    }
}
int main()
{
   insertt(head,12);
   insertt(head,44);
   insertt(head,66);
   insertt(head,88);
   insertt(head,99);
   display(head);
   length(head);
   first(head,12);
   display(head);
   deletenode(head,66);
   display(head);
   length(head);
   deletenode(head,44);
   display(head);
   return 0;
}

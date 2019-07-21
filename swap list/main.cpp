#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *head;
void insertt(node *s,int data)
{
    while(s->next !=NULL)
    {
        s=s->next;
    }
    s->next=new node;
    s->next->data=data;
    s->next->next=NULL;
}
void display(node *s)
{
    while(s->next !=NULL)
    {
        cout<< s->next->data <<"    ";
        s=s->next;
    }
    cout<<endl;
}
void countnode(node *s)
{   int countt=0;
    while(s!=NULL)
    {
        countt++;
        s=s->next;
    }
    cout<< countt<<endl;
}
void swapp(node *s,int x,int y)
{
    node *p;
    node *prev;
    p=s;
    prev=NULL;
    while(p!=NULL &&p->data !=x)
    {
        prev=p;
        p=p->next;
    }
    node *px=p;
    node *prevx=prev;
    p=s;
    prev=NULL;
    while(p !=NULL&& p->data !=y)
    {
        prev=p;
        p=p->next;
    }
    node *py=p;
    node *prevy=prev;

    node *temp;
    temp=py->next;
    py->next=px->next;
    px->next=temp;
    if(prevx==NULL)
    {
        py=head;
        prevy->next=px;
    }
    if(prevy==NULL)
    {
        px=head;
        prevx->next=py;

    }
    if(prevx !=NULL &&prevy !=NULL)
    {
        prevx->next=py;
        prevy->next=px;
    }


}

int main()
{
    head=new node;
    head->next=NULL;
    insertt(head,20);
    insertt(head,13);
    insertt(head,11);
    insertt(head,6);
    insertt(head,15);

    display(head);
    swapp(head,13,15);
    display(head);
    countnode(head);
}

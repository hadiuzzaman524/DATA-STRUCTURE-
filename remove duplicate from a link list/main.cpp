#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
}node;
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
void dublicate(node *s)
{   //node *s=p;
    node *temp;
    while(s->next !=NULL)
    {
        if(s->data==s->next->data)
        {
            temp=s->next->next;
            free(s->next);
            s->next=temp;
        }
        else
        s=s->next;
    }
}

int main()
{
   head=new node;
   head->next=NULL;
   insertt(head,20);
   insertt(head,13);
   insertt(head,13);
   insertt(head,11);
   insertt(head, 11);
   insertt(head,11);
   insertt(head,6);
   insertt(head,7);
   insertt(head,7);
   insertt(head,11);
   display(head);
   dublicate(head);
   display(head);
}

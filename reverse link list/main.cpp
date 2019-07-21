#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    struct mylist *next;

}node;
node *head;
void insertlink(node *s,int data)
{
    while(s->next !=0)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}
void reverselink(node *s)
{
   node *q;
   if(s->next==NULL)
   {
       head=s;
       return;
   }
   reverselink(s->next);
   q=s->next;
   q->next=s;
   s->next=NULL;
   cout<< q->data<<endl;

}
int display(node *s)
{
    while(s->next !=NULL)
    {
       cout<< s->next->data<<endl;
       s=s->next;
    }

}
int main()
{
    node *head=(node*)malloc(sizeof(node));
    head->next=NULL;
    insertlink(head,6);
    insertlink(head,5);
    insertlink(head,7);
    display(head);
    reverselink(head);



}

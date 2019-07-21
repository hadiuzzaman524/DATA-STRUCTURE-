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
    while(s->next !=NULL)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}
void display(node *s)
{
    while(s->next !=NULL)
    {
        cout<< s->next->data<< "   ";
        s=s->next;
    }
    cout<<endl;


}
node *reverselink(node *head)
{
    node *current,*pre,*next;
    current=head;
    pre=NULL;
    while(current !=NULL)
    {
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;

    }
    head=pre;
    return head;


}
int main()
{
   head=(node*)malloc(sizeof(node));
   head->next=NULL;
   insertlink(head,5);
   insertlink(head,4);
   insertlink(head,9);
   insertlink(head,45);
   insertlink(head,65);
   insertlink(head,53);
   display(head);
   head=reverselink(head);
   display(head);
}

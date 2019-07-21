#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *head;
void inset(node *s,int data)
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
        cout<<s->next->data<<endl;
        s=s->next;
    }
}
void revers(node *s)
{   node *q;
    if(s->next ==NULL)
    {
        q=s;
        return;
    }
    revers(s->next);
    q=s->next;
    q->next=s;
    s->next=NULL;
   cout<< q->next->data<<endl;

}
int main()
{

    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    inset(head,4);
    inset(head,6);
    inset(head,12);
    inset(head,15);
    inset(head,16);
    display(head);
    revers(head);
    //display(head);
}

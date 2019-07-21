#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;

void insertt(node *s,int data)
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
        cout<< s->next->data<<endl;
        s=s->next;
    }
}
void searchh(node *s,int data)
{   int cou=0;
    while(s->next !=NULL)
    {
        if(s->next->data==data)
        {
            cou++;
        }
        s=s->next;
    }
    cout<< cou<< endl;
}
void deletee(node *s,int data)
{
    while(s->next !=NULL)
    {
        if(s->next->data==data)
        {
            s->next=s->next->next;
            return;
        }
        s=s->next;
    }
}
void length(node *s)
{   int cou=0;
    while(s->next !=NULL)
    {
       cou++;
       s=s->next;
    }
    cout<< cou<<endl;
}
int main()
{
  node *head;
  head=(node*)malloc(sizeof(node));
  head->next=NULL;
    insertt(head,5);
    insertt(head,7);
    insertt(head,15);
    insertt(head,12);
    insertt(head,15);

    display(head);
    searchh(head,5);
    deletee(head,12);
    display(head);
    length(head);

}

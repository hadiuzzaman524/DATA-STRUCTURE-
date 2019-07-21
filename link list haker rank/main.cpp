#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct mynode
{
    int data;
    struct mynode *next;
}node;

void insertlinklist(node *s,int data)
{
    while(s->next !=NULL)
    {
        s=s->next;
    }
    s->next=(node*)malloc(sizeof(node));
    s->next->data=data;
    s->next->next=NULL;
}
void printlinklist(node *s)
{
    while(s->next !=NULL)
    {
        cout<<s->next->data<<endl;
        s=s->next;
    }
}
int main()
{   node *head;
    head=(node*)malloc(sizeof(node));
    int n;
    cin>>n;
    while(n>0)
    {
        int p;
        cin>>p;
    insertlinklist(head,p);

    n--;
    }
    printlinklist(head);


}

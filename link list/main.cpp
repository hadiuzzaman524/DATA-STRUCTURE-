#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
}node;
node *head=NULL;

void insert(node *s,int data)
{
    node *p;
    p=new node;
    p->data=data;
    p->next=NULL;
    if(head==NULL)
    {
      head=p;
    }
    else
    {
        node *q=s;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
}
void display(node *s)
{
    while(s !=NULL)
    {
        cout<< s->data << " ";
        s=s->next;
    }
    cout<<endl;

}
int countlist(node *s)
{
    int c=0;
    while(s !=NULL)
    {
        c++;
        s=s->next;
    }
    return c;
}
void reverselist(node *s)
{
    int x=countlist(s);
    int arr[x];
    int i=0;
    node *temp;
    temp=s;
    while(temp !=NULL)
    {
        arr[i]=temp->data;
        temp=temp->next;
        i++;
    }
    temp=s;
    i--;
    while(temp !=NULL)
    {
        temp->data=arr[i];
        i--;
        temp=temp->next;
    }

}
int main()
{
    insert(head,8);
    insert(head,88);
    insert(head,12);
    insert(head,66);
    display(head);
    reverselist(head);
    display(head);
    return 0;
}

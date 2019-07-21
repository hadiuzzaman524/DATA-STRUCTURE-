#include <iostream>

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
        cout<< s->next->data<< " ";

        s=s->next;
    }
    cout<<endl;
}
void reverselink(node *s)
{
   node *q;
   if(s->next==NULL)
   {
     head=s;
     return ;
   }
   reverselink(s->next);
   q=s->next;
   q->next=s;
   s->next=NULL;
   cout<<q->data<< ' ';

}

int main()
{
   head=new node;
   head->next=NULL;
    head->next=NULL;
    insertt(head,1);
    insertt(head,2);
    insertt(head,1);
    insertt(head,5);
    display(head);
    reverselink(head);
    //display(head);
}

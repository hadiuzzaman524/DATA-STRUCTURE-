#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
}node;
node *head=NULL;
void insertt(node *s,int data)
{
    s=new node;
    s->data=data;
    s->next=NULL;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        node *p=head;
    while(p->next !=NULL)
    {
        p=p->next;
    }
    p->next=s;

    }
}
void display(node *s)
{
    while(s->next !=NULL)
    {
        cout<< s->next->data << " ";
        s=s->next;
    }
    cout<<endl;
}
void swaplist(node *s,int k,int n)
{
    node *p=s;
    node *prev=NULL;
    for(int i=0; i<k; i++)
    {
        prev=p;
        p=p->next;
    }
    node *px=p;
    node *prevx=prev;

    for(int i=0; i<n-k+1; i++)
    {
        prev=p;
        p=p->next;
    }
    node *py=p;
    node *prevy=prev;
    if(prevx)
        prevx->next=py;
    if(prevy)
        prevy->next=px;
    node *temp;
    temp=px->next;
    px->next=py->next;
    py->next=temp;



}
int main()
{
    for(int i=1; i<=9; i++)
    {
        insertt(head,i);
    }
    display(head);
    swaplist(head,3,9);
    display(head);

}

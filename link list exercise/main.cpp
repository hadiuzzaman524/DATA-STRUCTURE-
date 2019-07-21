#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist// main structure of node..............
{
    int data;  // data in the node.....
    mylist *next;// point to next node..........
}node;// name of the structure is node.......
node *head=NULL; // initially head becomes NULL........

void insert(node *s,int data) //insert at last every times................
{
    node *p;
    p=new node;// allocate the memory for node... its works like malloc function in c..
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
void display(node *s)// show the link list
{
    while(s !=NULL)
    {
        cout<< s->data << " ";
        s=s->next;
    }
    cout<<endl;

}
void insertatfirst(int x) // insert node at first of the list
{
    node *p;
    p=new node;
    p->data=x;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
    }
    else
    {

        p->next=head;
        head=p;


    }

}
void insertatpos(int data,int pos)// insert node using positions................
{   node *temp=head;
    node *s;
    s=new node;
    s->data=data;
    s->next=NULL;
    int c=1;
    while(temp->next !=NULL)
    {
        c++;
        if(c==pos)
        {
            node *temp2=temp->next;
            temp->next=s;
            s->next=temp2;
        }
        temp=temp->next;
    }
}
void updatenode(int data,int pos)// update value of any node using position................
{   node *temp=head;
    node *s;
    s=new node;
    s->data=data;
    s->next=NULL;
    int c=1;
    while(temp->next !=NULL)
    {
        c++;
        if(c==pos)
        {
            node *temp2=temp->next->next;
            temp->next=s;
            s->next=temp2;
        }
        temp=temp->next;
    }
}
int countnode(node *s)//count total node...................
{
    int c=0;
    while(s !=NULL)
    {
        c++;
        s=s->next;
    }
    return c;
}
void deletenode(node *s,int data)// delete node when finding the passing data..
{
    while(s->next!=NULL)
    {
        if(s->next->data ==data)
        {
            s->next=s->next->next;
        }
        s=s->next ;
    }
}
void deletenodepos(node *s,int pos)// delete node using the position .............
{
    int c=1;
    while(s->next!=NULL)
    {
        c++;
        if(c==pos)
        {
            s->next=s->next->next;
        }
        s=s->next;
    }
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insertatfirst(7);
    insert(9);
    display(head);
    deletenode(head,4);
    deletenode(head,6);
    display(head);
    deletenodepos(head,2);
    display(head);
    insertatpos(8,3);
    display(head);
    updatenode(7,4);
    display(head);
    reverselist(head);

    cout<<"\ntotal number of node :"<<countnode(head)<<endl;
    return 0;
}

#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *head=NULL;
void push(int x)
{
    node *temp;
    temp=new node;
    if(temp==NULL)
    {
        cout<< "stack is overflow."<<endl;
    }
    else
    {
        temp->data=x;
        temp->next=head;
        head=temp;
    }


}
void display()
{
    node *p=head;
    while(p !=NULL)
    {
        cout<< p->data<<endl;
        p=p->next;
    }
}
int pop()
{
    int x=-1;
    if(head==NULL)
    {
        cout<< "the stack is empty."<<endl;
    }
    else
    {
        node *p;
        p=head;
        x=head->data;
        head=head->next;

        free(p);
    }
    return x;
}

int main()
{
   push(4);
   push(5);
   push(6);
   push(7);
   push(8);
   display();
   cout<<endl;
   cout<< pop()<<endl;
   cout<< pop()<<endl;
    return 0;
}

#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
}node;
node *temp=NULL;
void insert(int data)
{
    node *t;
    t=new node;
    t->data=data;
    t->next=NULL;
    if(temp==NULL)
        temp=t;
    else
    {
        node *p=temp;/*
        while(p->next!=NULL)
            p=p->next;
        p->next=t;*/
        node *m=NULL;
        while(p&&p->data<data)
        {
            m=p;
            p=p->next;
        }
        if(p==temp)
        {
            t->next=temp;
            temp=t;
        }
        else
        {
                m->next=t->next;
                m->next=t;

        }


    }
}
void display()
{
    while(temp!=NULL)
    {
        cout<< temp->data<< " ";
        temp=temp->next;
    }
}
int main()
{
insert(7);
  insert(98);
   insert(8);
   insert(34);
   insert(87);

   insert(100);
   insert(700);
   insert(3);
   //insert(root,34);
  // insert(root,23);
   display();
    return 0;
}

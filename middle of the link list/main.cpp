#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
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
int length(node *head)
{  static int i=0;
    while(head->next !=NULL)
    {
        i++;
        head=head->next;
    }
    return i;
}
void middle(node *head)
{
    int k=length(head);
    int j=0;
    int data;
    while(head->next !=NULL)
    {
        j++;
        if(j==(k/2)+1)
          data=head->next->data;
          head=head->next;

    }
   cout<<data;
}
void findoccurs(node *head,int occour)
{   int cou=0;
    while(head->next !=NULL)
    {
        if(head->next->data==occour)
            cou++;
            head=head->next;
    }
    cout<< "\ntotal find number is: "<< cou<<endl;
}
int main()
{
    node *head;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    insertt(head,4);
    insertt(head,33);
    insertt(head,35);
    insertt(head,32);
    insertt(head,99);
    insertt(head,345);
    insertt(head,4);
    display(head);
    middle(head);
    findoccurs(head,4);


}

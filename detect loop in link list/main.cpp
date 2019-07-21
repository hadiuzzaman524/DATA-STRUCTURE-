#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
} node;
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
        cout<< s->next->data<< "   ";
        s=s->next;
    }
    cout<<endl;
}
int countNodes( node *n)
{
   int res = 1;
 node *temp = n;
   while (temp->next != n)
   {
      res++;
      temp = temp->next;
   }

    cout<< "length of loop is:"<<res<<endl;

}
int  detectloop(node *s)
{
    if(s->next==NULL)
        return NULL;
    node *hare=s;
    node *tortoise=s;
    while(hare)
    {
        if(hare->next &&hare->next->next)
        {
            hare=hare->next->next;
        }
        else
            return NULL;
        tortoise=tortoise->next;
        if(hare==tortoise)
        {
            cout<< "loop is found.\n";
            countNodes(tortoise);
            break;
        }
    }

}
int main()
{
    node *head;
    head=new node;
    head->next=NULL;
    insertt(head,4);
    insertt(head,5);
    insertt(head,9);
    insertt(head,13);
    insertt(head,12);
    display(head);
    head->next->next->next->next->next=head;
    detectloop(head);


}

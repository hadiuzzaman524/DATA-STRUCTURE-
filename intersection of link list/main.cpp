#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *head;
node *head2;
node *head3;

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
        cout<< s->next->data<< "  ";
        s=s->next;
    }
    cout<<endl;
}
bool isPresent ( node *head, int data)
{
     node *t = head;
    while (t != NULL)
    {
        if (t->data == data)
            return 1;
        t = t->next;
    }
    return 0;
}
 node *getIntersection( node *head1,
                              node *head2)
{
     node *result = NULL;
     node *t1 = head1;
    while (t1 != NULL)
    {
        if (isPresent(head2, t1->data))
            insertt(result, t1->data);
        t1 = t1->next;
    }

    return result;
}




int main()
{
    head=new node;
    head->next=NULL;
    head2=new node;
    head2->next=NULL;
    head3=NULL;
    insertt(head,4);
    insertt(head,6);
    insertt(head,8);
    display(head);
    insertt(head2,4);
    insertt(head2,6);
    insertt(head2,8);
    insertt(head2,7);
    display(head2);
    head3= getIntersection(head,head2);
    display(head3);

}

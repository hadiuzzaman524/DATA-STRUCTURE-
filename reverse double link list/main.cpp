#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *right;
    mylist *left;
}node;
node *head=NULL;
void insertt(node *s,int data)
{
    s=new node;
    s->right=NULL;
    s->left=NULL;
    s->data=data;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        node *p;
        p=head;
        while(p->right!=NULL)
        {
            p=p->right;
        }
        p->right=s;
        s->left=p;

    }

}
void reverselinklist(node *s)
{
    s=head;
    node *temp;

    while(s !=NULL)
    {
        temp=s->left;
        s->left=s->right;
        s->right=temp;
        s=s->left;
    }
    if(temp !=NULL)
    {
        temp=temp->left;
    }
    head=temp;



}
void display(node *s)
{
    while(s !=NULL)
    {
        cout<< s->data<< ' ';
        s=s->right;
    }
    cout<< endl;
}
int main()
{
    insertt(head,1);
    insertt(head,2);
    insertt(head,3);
    insertt(head,4);
    insertt(head,5);
    insertt(head,6);
    display(head);
    reverselinklist(head);
    display(head);
}

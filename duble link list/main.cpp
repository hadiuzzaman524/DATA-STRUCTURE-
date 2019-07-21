#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
} node;
node *head;
void insertt(node *s,int data)
{
    s=(node*)malloc(sizeof(node));
    s->data=data;
    s->right=NULL;
    s->left=NULL;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        node *p ;
        p=head;
        while(p->right !=NULL)
        {
            p=p->right;
        }
        p->right=s;
        s->left=p;
    }
}
void beginingnode(node *s,int data)
{
    s=(node*)malloc(sizeof(node));
    s->data=data;
    s->left=NULL;
    s->right=NULL;
    if(head==NULL)
    {
        head=s;
    }
    else
    {
        s->right=head;
        head->left=s;
        head=s;
    }
}
void display(node *s)
{
    s=head;
    if(s==NULL)
    {
        cout<< "the list is empty."<<endl;
    }
    else
    {
        while(s !=NULL)
        {
            cout<< s->data<< " ";
            s=s->right;
        }
    }
}
int length(node *s)
{
    int c=1;
    while(s->right !=NULL)
    {
        c++;
        s=s->right;
    }
    return c;
}
void afterspecifing(node *temp,int data)
{
    node *p,*s;
    int loc;
    int len;
    int i=1;
    cout<< "enter the location of you add a number?";
    cin>>loc;
    len=length(head);
    if(loc>len)
    {
        cout<< "invalid location."<<endl;
    }
    else
    {
        s=(node*)malloc(sizeof(node));

        s->data=data;
        s->right=NULL;
        s->left=NULL;
        p=temp;
        while(i<loc)
        {
            p=p->right;
            i++;
        }
        s->right=p->right;
        p->right->left=s;
        s->left=p;
        p->right=s;
        display(temp);



    }
}
void deletenode(node *temp)
{
    node *s;
    int len,loc,i=1;
    cout<< "enter the location of you delete the data?";
    cin>>loc;
    len=length(temp);
    if(loc>len)
    {
        cout<< "invalid location please enter currect location.";
    }
    else
    {
        s=temp;
        while(i<loc)
        {
            s=s->right;
            i++;
        }
        s->right=s->right->right->right->left;
        s->right->right->right->left=s;

    }

}
void searchlist(node *s,int data)
{   int c=0;
    while(s->right !=NULL)
    {
        if(s->data==data)
        {
            c++;
        }
        s=s->right;
    }
    cout<< "the searching item is : "<< c<<endl;
}

int main()
{
    //node *head;
    //head=(node*)malloc(sizeof(node));
    head=NULL;
    insertt(head,5);
    insertt(head,6);
    insertt(head,12);
    insertt(head,265);
    beginingnode(head,666);
    beginingnode(head,444);
    display(head);
    int len=length(head);
    cout<< "\nthe length of the list is: "<<len<<endl;
    afterspecifing(head,55);
    len=length(head);
    cout<< "\nthe length of new list is: " <<len<<endl;
    deletenode(head);
    display(head);
    len=length(head);
    cout<< "\nlength of the new node is:  "<<len<<endl;
    searchlist(head,55);





}

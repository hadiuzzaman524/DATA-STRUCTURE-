#include <iostream>
#include <algorithm>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
}node;
node *head=NULL;
void insertt(node *s,int data)
{
    s=new node;
    s->data=data;
    s->left=NULL;
    s->right=NULL;
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
void display(node *s)
{
    while(s->right !=NULL)
    {
        cout<< s->right->data<< " " ;
        s=s->right;
    }
    cout<<endl;
}
int length(node *s)
{
    int c=0;
    while(s->right !=NULL)
    {
        c++;
        s=s->right;
    }
    return c;
}
void swapfirst(node *s,int pos)
{
    if(length(head)<pos)
    {
        cout<< "invalid position.\n";
    }
    else
    { int k=0;
       while(k<pos)
       {
           s=s->right;
           k++;
       }
       node *p=head;
      s->right=p;
      p->left=s;
      p->right=NULL;
     // s->left=NULL;



    }
}
int main()
{
    for(int i=0; i<10; i++)
    {
        insertt(head,i);
    }
    display(head);
    swapfirst(head,4);
    display(head);

}

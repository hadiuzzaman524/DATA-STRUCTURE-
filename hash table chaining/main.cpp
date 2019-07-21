#include <iostream>

using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
}node;
void insertsort(node **h,int data)
{
    node *temp;
    temp=new node;
    temp->data=data;
    temp->next=NULL;
    if(*h==NULL)
    {
        *h=temp;
    }
    else
    {
        node *p=*h,*q=NULL;
        while(p&&p->data<data)
        {
            q=p;
            p=p->next;
        }
        if(p==*h)
        {
            temp->next=*h;
            *h=temp;
        }
        else
        {
            temp->next=q->next;
            q->next=temp;
        }
    }
}

int hashkey(int x)
{
    return x%10;
}
void insert(node *temp[],int x)
{  int index=hashkey(x);
    insertsort(&temp[index],x);
}
node *search(node *temp,int x)
{
    while(temp!=NULL)
    {
        if(temp->data==x)
            return temp;

        temp=temp->next;
    }
}
int main()
{
   node *h[10];
   for(int i=0;i<10; i++)
    h[i]=NULL;
    insert(h,10);
    insert(h,12);
    insert(h,55);
    insert(h,20);
    node *m=search(h[hashkey(20)],20);
    cout<< m->data;

    return 0;
}

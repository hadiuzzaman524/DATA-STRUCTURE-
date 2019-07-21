#include <iostream>
#define qsize 5

using namespace std;
typedef struct
{
    int data[qsize+1];
    int head,tail;
}queue;
void enqueue(queue *q,int item)
{

    if((q->head+1)%(qsize+1)==q->head)
    {
       cout<< "the queue is empty."<<endl;
       return ;
    }
    else
    {
        q->data[q->tail]=item;
        q->tail=(q->tail+1)%(qsize+1);
    }

}
int dequee(queue *q)
{
    int item;
    if(q->head==q->tail)
    {
        cout<< " the queue is empty."<<endl;
        return -1;
    }
    else
    {
        item=q->data[q->head];
        q->head=(q->head+1)%(qsize+1);
    }
    return item;
}
void display(queue *s)
{
    while(s->head !=0)
    {
        cout<< s->data[s->head]<< " ";
        s->head=(s->head+1)%(qsize+1);
    }
}
int main()
{
  queue h;
  h.head=0;
  h.tail=0;
  enqueue(&h,1);
  enqueue(&h,2);
  enqueue(&h,3);
  enqueue(&h,5);
  display(&h);
  cout<< dequee(&h);
  cout<< dequee(&h);
  cout<< dequee(&h);
  cout<< dequee(&h);
  enqueue(&h,9);
  cout<< dequee(&h);
  enqueue(&h,10);
  cout<< dequee(&h);
    return 0;
}

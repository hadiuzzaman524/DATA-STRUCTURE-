#include <iostream>
#include <stdio.h>
using namespace std;
#define Qsize 5
typedef struct
{
    int data[Qsize+1];
    int head,tail;
}Queue;
void enqueue(Queue *q,int item)
{
    if((q->tail+1)%(Qsize+1)==q->head)
    {
        cout<< "queue is full.";
        return;
    }
    q->data[q->tail]=item;
    q->tail=(q->tail+1)%(Qsize+1);
}
int dequeue(Queue *q)
{
    int item;
    if(q->head==q->tail)
    {
        cout<< "queue is empty.";
        return -1;
    }
    item=q->data[q->head];
    q->head=(q->head+1)%(Qsize+1);
    return item;
}
int main()
{
   Queue my;
   int item;
   my.head=0;
   my.tail=0;
   enqueue(&my,5);
   cout<<my.tail;
   enqueue(&my,6);
   cout<< my.tail;
   enqueue(&my,5);
   cout<< my.tail;
   cout<< "   hegining head   "<< my.head;
   item=dequeue(&my);
   cout<< item<<endl;
}

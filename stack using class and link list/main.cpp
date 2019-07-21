#include <iostream>
#include <stdlib.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

};
class stack
{
private:
    node *head;
public:
    stack()
    {
        head=0;
    }
    void display();
    void push(int x);
    int pop();
};
void stack::display()
{
    node *s;
    while(s !=NULL)
    {
        cout<< s->data<<endl;
        s=s->next;
    }
}
void stack::push(int x)
{
    node *s;
    s=new node;
    if(s==NULL)
        cout<< "stack is overflow.\n";
    else

        s->data=x;
      s->next=head;
      head=s;

}
int stack::pop()
{
    node *s=head;
    int x=-1;
    if(head==NULL)
        cout<< "the stack is full.\n";
    else
    {
        x=head->data;
        head=head->next;
        free(s);
    }
}

int main()
{
    stack s;
    s.push(5);
    s.push(8);
    s.display();
    return 0;
}

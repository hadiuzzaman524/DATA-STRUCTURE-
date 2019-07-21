#include <iostream>

using namespace std;
class node
{ public:
    int data;
    node *next;
};
class linklist
{
    node *head;
public:
    linklist ()
    {
        head=NULL;
    }
    void display();
    void insert(int x);
};
void linklist::insert(int x)
{
  node *s=head;
  while(s !=NULL)
  {
      s=s->next;

  }
  s->next=new node;
  s->next->data=x;
  s->next->next=NULL;
}
void linklist::display()
{
    node *s=head;
    while(s !=NULL)
    {
        cout<< s->data<< " ";
        s=s->next;
    }
}

int main()
{
    linklist ob;
    ob.insert(8);
    ob.insert(9);
    ob.display();
    return 0;
}

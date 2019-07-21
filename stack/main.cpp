#include <iostream>
using namespace std;

class stack
{   public:
    int top;
    static const int max=100;
    char data[10];

    stack()
    {
        top=-1;
    }
    bool isempty();
    bool isfull();
    void push(char x);
    char pop();
};
bool stack::isempty()
{
    if(top==-1)
        return true;
    return false;
}
bool stack::isfull()
{
    if(top==max-1)
        return true;
    return false;
}
void stack::push(char x)
{
    if(isfull())
    {
        cout<< "the stack is overflow.\n";
    }
    else
        top++;
    data[top]=x;

}
char stack::pop()
{
    if(isempty())
    {
        cout<< "the stack is empty.\n";
    }
    else
    {
        char x;
        x=data[top];
        top=top-1;
        return x;
    }
}
int main()
{
  stack s;
  string p;
  getline(cin,p);
  int n=p.size();
  for(int i=0; i<n; i++)
  s.push(p[i]);
  for(int i=0; i<n; i++)
  cout<< s.pop();
    return 0;
}

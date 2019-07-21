#include <iostream>
#include <queue>
using namespace std;
class stack
{
    queue <int>q1,q2;
    int cur_size;
public:
    stack()
    {
        cur_size=0;
    }
    void push(int x);
    void pop();
    int top();
};
void stack::push(int x)
{
    cur_size++;
    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    queue <int>q;
    q=q1;
    q1=q2;
    q2=q;
}
void stack::pop()
{
    if(q1.empty())
        return ;
    else
    {
        q1.pop();
        cur_size--;
    }
}
int stack::top()
{
    if(q1.empty())
        return -1;
    else
        return q1.front();
}
int main()
{
    stack s;
    s.push(5);
    s.push(9);
    s.push(12);
    s.push(15);
    cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;
}

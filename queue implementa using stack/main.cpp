#include <iostream>
#include <stack>
using namespace std;
class queue
{
    stack <int>s1,s2;
public:
    void enque(int x);
    int deque();
    //int front();
};
void queue::enque(int x)
{
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
int queue::deque()
{
    int x=-1;
    if(s1.empty())
        return x;
    else
    {
        x=s1.top();
        s1.pop();
    }
    return x;
}
int main()
{
 queue q;
 q.enque(1);
 q.enque(2);
 q.enque(3);
 q.enque(4);
 q.enque(5);
 cout<< q.deque();
 cout<< q.deque();
}

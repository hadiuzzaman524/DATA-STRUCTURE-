#include <iostream>
#include <queue>
using namespace std;
class stack
{
    queue <int> q;
public:
    void push(int item);
    int pop();

};
void stack::push(int item)
{
    int s=q.size();
    push(item);
    for(int i=0; i<s; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
int stack::pop()
{
    int x=q.front();
   // q.pop();
    return x;
}
int main()
{
   stack s;
   s.push(5);
   s.push(7);
   s.push(8);
   s.push(18);
   cout<< s.pop()<<endl;
}

#include <iostream>
#include <stack>
using namespace std;
bool isbalance(string eqn)
{
    stack <char> s;
    char x;
    for(int i=0; eqn[i]!='\0'; i++)
    {
        if(eqn[i]=='('||eqn[i]=='{'||eqn[i]=='[')
            {
                s.push(eqn[i]);

            }

        if(s.empty())
            return false;
        else
        {
            switch(eqn[i])
            {
            case ')':
                x=s.top();
                s.pop();
                if(x=='{'||x=='[')
                    return false;
                    break;
            case '}':
                x=s.top();
                s.pop();
                if(x=='('||x=='[')
                    return false;
                break;
            case ']':
                x=s.top();
                s.pop();
                if(x=='('||x=='{')
                    return false;
                break;
            }
        }
    }
    return s.empty();
}
int main()
{
   string s;
   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       cin>>s;
       bool p= isbalance(s);
  if(p==true)
    cout<< "YES"<<endl;
  else
    cout<< "NO"<<endl;
   }

    return 0;
}

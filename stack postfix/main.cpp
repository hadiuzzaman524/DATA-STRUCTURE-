#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
bool isoperand(char s)
{
    if(s=='+'|| s=='-'|| s=='*'|| s=='/'||s=='^'||s=='('||s==')')
        return false;
    return true;
}
int precidence(char s)
{
    if(s==')')
        return 1;
    if(s=='+'|| s=='-')
        return 2;
    else if(s=='*'|| s=='/')
        return 3;
    else if (s=='^')
        return 4;
    else
        return 0;
}
char *convertpost(char *infix)
{
    char *postfix;
    stack<char>stk;
   // stk.push('(');
    int len=strlen(infix);
    postfix=new char[len+1];
    int i=0,j=0;
    char x;
    while(infix[i] !='\0')
    {
        if(isoperand(infix[i]))
        {
            postfix[j++]=infix[i++];
        }
        else if(infix[i]=='(')
        {
            stk.push(infix[i]);
            i++;


        }
        else if(infix[i]==')')
        {
            while(stk.top()!='(')
            {
                postfix[j++]=stk.top();
                stk.pop();

            }
            stk.pop();
             i++;


        }
        else
        {
            while(precidence(stk.top())>=precidence(infix[i]))
            {
                postfix[j++]=stk.top();
                stk.pop();

            }
            stk.push(infix[i]);
            i++;
        }

    }
    while(!stk.empty())
    {
        postfix[j++]=stk.top();
        stk.pop();
    }
    postfix[j]='\0';
    return postfix;
}

int main()
{
    char *s("((4-(1+2*(6/3)-5)))");


   // push('#');
    char *postfix=convertpost(s);
    puts(postfix);


    return 0;
}

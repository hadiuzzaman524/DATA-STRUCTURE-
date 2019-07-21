#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *next;
} node;
node *top=NULL;
void push(int x)
{

    node *temp;
    temp=new node;
    if(temp==NULL)
    {
        cout<< "the stack is overflow.\n";
    }
    else
    {
        temp->data=x;
        temp->next=top;
        top=temp;
    }


}

void display(node *s)
{
    while(s !=NULL)
    {
        cout<< s->data<<endl;
        s=s->next;
    }
    cout<< endl;
}

int pop()
{
    int s;
    if(top==NULL)
    {
        cout<< "stack is under flow.\n";
    }
    else
    {
        node *p=top;
        s=top->data;
        top=top->next;
        free(p);
    }
    return s;
}

bool isoperand(char s)
{
    if(s=='+'|| s=='-'|| s=='*'|| s=='/'||s=='^'||s=='('||s==')')
        return false;
    return true;
}

int precidence(char s)
{
    if(s=='+'|| s=='-')
        return 1;
    else if(s=='*'|| s=='/')
        return 2;
    else if(s=='('|| s==')')
        return 4;
    else if(s=='^')
        return 3;
    else
        return 0;

}

int convertpost(char *infix)
{
   int x1,x2,r=0;
   for(int i=0; infix[i] !='\0'; i++)
   {
       if(isoperand(infix[i]))
       {
           push(infix[i]-'0');
       }
       else
       {
           x2=pop();
           x1=pop();
           switch(infix[i])
           {
               case '+':r=x2+x1;
               break;
               case '-':r=x2-x1;
               break;
               case '*':r=x2*x1;
               break;
               case '/':r=x2/x1;
               break;
           }
           push(r);
       }
   }
   return (top->data);
}

int main()
{
    char *s="4*6+3(4+4)";
    push('$');
    int postfix=convertpost(s);
    cout<<postfix;

    return 0;
}

#include <iostream>
#include <stack>
#include <queue>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;
} node;

node *createnode(int item)
{
    node *temp;
    temp=new node;
    if(temp ==NULL)
    {
        cout<< "could not create the node. "<<endl;
    }
    else
    {
        temp->data=item;
        temp->left=temp->right=NULL;

    }
    return temp;
}
void add_left(node *temp,node *child)
{
    temp->left=child;
}
void add_right(node *temp,node *child)
{
    temp->right=child;
}
node *create_tree()
{
    node *two=createnode(2);
    node *three=createnode(3);
    node *four=createnode(4);
    add_left(two,three);
    add_right(two,four);
    node *five=createnode(5);
    node *six=createnode(6);
    add_left(three,five);
    add_right(three,six);
    return two;
}
void pre_order(node *temp)
{
    if(temp==NULL)
        return ;
    else
    {
        stack <node*> st;
        node *h;
        st.push(temp);
        while(!st.empty())
        {
            h=st.top();
            cout<< h->data<< " ";
            st.pop();
            if(h->right)
                st.push(h->right);
            if(h->left)
                st.push(h->left);
        }
    }

}
void inorder(node *temp)
{
    stack <node *> st;
    node *h=temp;
    while(h !=NULL|| !st.empty())
    {
        while(h !=NULL)
        {
            st.push(h);
            h=h->left;
        }
        h=st.top();
        st.pop();
        cout<< h->data<<" ";
        h=h->right;
    }

}
void postorder(node *temp)
{
    stack<node *>st1;
    stack <node *>st2;
    node *item=temp;
    st1.push(item);
    while(!st1.empty())
    {
        item=st1.top();
        st2.push(item);
        st1.pop();
        if(item->left)
            st1.push(item->left);
        if(item->right)
            st1.push(item->right);
    }
    while(!st2.empty())
    {
        node *p=st2.top();
        st2.pop();
        cout<< p->data<< " ";
    }
}
void levelorder(node *temp)
{
  queue<node *> q;
  node *t=temp;
  cout<< t->data<< " ";
  q.push(t);
  while(!q.empty())
  {
      node *p=q.front();
      q.pop();
      if(p->left)
      { cout<<p->left->data<< " ";
         q.push(p->left);
      }

      if(p->right)
      {
          cout<< p->right->data<< " ";
          q.push(p->right);
      }
  }
}
int count(node *temp)
{
    int x,y;
    if(temp !=NULL)
    {
        x=count(temp->left);
        y=count(temp->right);
        return x+y+1;
    }
    return 0;
}
int internalnode(node *temp)
{
    int x,y;
    if(temp !=NULL)
    {
        x=internalnode(temp->left);
        y=internalnode(temp->right);
        if(temp->left&&temp->right)
            return x+y+1;
        else
            return x+y;
    }
}
int main()
{
    node *root=create_tree();
    pre_order(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    levelorder(root);
    cout<<endl;
    cout<< "total node: "<<endl;
    cout<< count(root)<<endl;
    cout<< "internal node is: "<<endl;
    cout<< internalnode(root);


    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
typedef struct mylist
{
    int data;
    mylist *left;
    mylist *right;

}node;
vector<int>vc;
node *newnode(int x)
{
    node *temp;
    temp=new node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node *insert(node *temp,int x)
{
    if(temp==NULL)
    {
        return newnode(x);
    }
    if(x<temp->data)
        temp->left=insert(temp->left,x);
    else if(x>temp->data)
        temp->right=insert(temp->right,x);
    else
        return temp;
}

void inorder(node *root)
{
    if(root !=NULL)
    {
        inorder(root->left);
        //cout<< root->data<< " ";
        vc.push_back(root->data);
        inorder(root->right);
    }
}
bool check(node *root)
{
    inorder(root);
    for(int i=1; i<vc.size(); i++)
    {
			if(vc[i] <= vc[i-1]) {
				return false;
			}

    }
    return true;
}
int main()
{
    node *root=NULL;
    root=insert(root,6);
    root=insert(root,9);
    root=insert(root,24);
    root=insert(root,53);
    root=insert(root,87);
    inorder(root);
    if(!check(root))
        cout<< "yes";
    else
        cout<< " no";

    return 0;
}

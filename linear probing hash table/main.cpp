#include <iostream>
#define size 10
using namespace std;
int hash(int x)
{
    return x%size;
}
int probe(int h[],int x)
{
    int index=hash(x);
    int i=0;
    while(h[(index+i)%size]!=0)
        i++;
    return (index+i)%size;
}
void insert(int h[],int x)
{
    int index=hash(x);
    if(h[index]!=0)
        index=probe(h,x);
    h[index]=x;

}
int search(int h[],int x)
{
    int index=hash(x);
    int i=0;
    while(h[index+i]%size!=x)
        i++;
    return (index+i)%size;
}
int main()
{
    int h[size]={0};
    insert(h,12);
    insert(h,4);
    insert(h,8);
    insert(h,20);
    insert(h,10);
    for(int i=0; i<size; i++)
        cout<< h[i]<< " ";
    cout<<endl;
    int m=search(h,4);
    cout<<"4 is found at index:"<< m<< endl;
}

#include <iostream>
#define size 10
using namespace std;
int hash1(int x)
{
   return x%10;
}
int hash2(int x)
{
    return 7-(x%7);
}
int probe(int h[],int x)
{
    int index=hash1(x);
    int i=0;
    while(h[(index+i*hash2(x))%size] !=0)
        i++;
    return (index+i*hash2(x))%size;

}
void insert(int h[],int x)
{
    int index=hash1(x);
    if(h[index]!=0)
        index=probe(h,x);
    h[index]=x;
}
int search(int h[],int x)
{
    int index=hash1(x);
    int i=0;
    while(h[(index+i*hash2(x))%size] !=x)
        i++;
    return (index+i*hash2(x))%size;

}
int main()
{
   int h[size]={0};
   insert(h,5);
   insert(h,25);
   insert(h,15);
   insert(h,35);
   insert(h,95);
   for(int i=0; i<10; i++)
    cout<< h[i]<< " ";
   cout<<endl;
   int m=search(h,95);
   cout<< m<<endl;

    return 0;
}

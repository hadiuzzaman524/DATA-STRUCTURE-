#include <iostream>

using namespace std;
void insert(int ar[],int n)
{
    int temp=ar[n];
    int i=n;
    while(i>1&&temp>ar[i/2])
    {
        ar[i]=ar[i/2];
        i=i/2;
    }
    ar[i]=temp;
}
int deleteel(int ar[],int n)
{
    int temp=ar[n];
    int val=ar[1];
    ar[1]=temp;
    ar[n]=val;
    int i,j;
    i=1;
    j=2*i;
    while(j<n-1)
    {
        if(ar[j]<ar[j+1])
            j++;
        if(ar[i]<ar[j])
        {
            int x=ar[i];
            ar[i]=ar[j];
            ar[j]=x;
            i=j;
            j=j*2;
        }
        else break;
    }
    return val;
}
int main()
{
    int ar[]={0,10,20,30,25,5,40,35};
    for(int i=2; i<8; i++)
        insert(ar,i);
    for(int i=1; i<8; i++)
        cout<<ar[i]<< " ";
    cout<<endl;
    for(int i=7; i>1; i--)
        deleteel(ar,i);
          for(int i=1; i<8; i++)
        cout<<ar[i]<< " ";
    cout<<endl;


    return 0;
}

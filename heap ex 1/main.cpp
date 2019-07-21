#include <iostream>

using namespace std;
int size=8;
void insert(int h[],int x)
{
   int i=x;
   int temp=h[i];
   while(i>1&&temp>h[i/2])
   {
       h[i]=h[i/2];
       i=i/2;
   }
   h[i]=temp;
}
void deleteel(int ar[],int n)
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
   size--;
}
int main()
{
   int h[]={0,10,20,30,25,5,40,35};
   for(int i=2; i<size; i++)
    insert(h,i);
   for(int i=1; i<size; i++)
    cout<< h[i]<<" " ;
    cout<<endl;
    deleteel(h,7);
    deleteel(h,6);
     deleteel(h,5);
     for(int i=1; i<size; i++)
    cout<< h[i]<<" " ;

    return 0;
}

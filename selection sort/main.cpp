#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   int small=0;
   for(int i=0; i<n-1; i++)
   {
       small=i;
       for(int j=i+1; j<n; j++)
       {
           if(a[small]>a[j])
            small=j;
       }
       if(small !=i)
       {
           int temp=a[i];
           a[i]=a[small];
           a[small]=temp;

       }

   }
   for(int i=0; i<n; i++)
   {
       cout<< a[i]<< "   ";
   }
}

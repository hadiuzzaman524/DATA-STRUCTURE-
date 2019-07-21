#include <iostream>

using namespace std;
int *insertion(int ar[],int n)
{
    for(int i=1; i<n; i++)
    {
        int small=ar[i];
        int j=i-1;
        while(j>=0&&ar[j]>small)
        {
            ar[j+1]=ar[j];
            j--;

        }
        ar[j+1]=small;
    }
    return ar;
}
int *selectionsort(int ar[],int n)
{
    for(int i=0; i<n; i++)
    {
        int small=i;
        for(int j=i+1; j<n+1; j++)
        {
            if(ar[j]<ar[small])
                small=j;
        }
        if(small !=i)
        {
            int temp;
            temp=ar[i];
            ar[i]=ar[small];
            ar[small]=temp;
        }

    }
    return ar;
}
int *bubblesort(int ar[],int n)
{
 for(int i=0; i<n; i++)
 {
     for(int j=0; j<n-i-1; j++)
     {
         if(ar[j]>ar[j+1])
         {
             int temp;
             temp=ar[j];
             ar[j]=ar[j+1];
             ar[j+1]=temp;
         }
     }
 }
 return ar;
}
int main()
{
    int ar[]={2,1,6,4,8,9,27,56,30};
    int n=sizeof(ar)/sizeof(int);
    int *p=insertion(ar,n);
    for(int i=0; i<n; i++)
        cout<< p[i]<< " ";
    cout<<endl;
    int *q=selectionsort(ar,n);
    for(int i=0; i<n; i++)
        cout<< q[i]<< " ";
    cout<<endl;
    int *r=bubblesort(ar,n);
    for(int i=0; i<n; i++)
        cout<< r[i]<< " ";
    cout<<endl;

    return 0;
}

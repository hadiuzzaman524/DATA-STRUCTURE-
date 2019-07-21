#include <iostream>

using namespace std;
int partition(int ar[],int low,int high)
{
    int pivot=ar[low];
    int i=low;
    int j=high;

    while(i<j)
    {
        do
        {
            i++;
        }
        while(ar[i]<=pivot);
        do
        {
            j--;
        }
        while(ar[j]>pivot);
        if(i<j)
        {
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }


    }

    int temp=ar[low];
    ar[low]=ar[j];
    ar[j]=temp;
    return j;

}
void quick_sort(int ar[7],int low,int high)
{
    if(low<high)
    {
        int j=partition(ar,low,high);
        quick_sort(ar,low,j);
        quick_sort(ar,j+1,high);
    }

}
int main()
{
    int ar[]= {10,5,9,16,2,8,19};

    quick_sort(ar,0,6);
    for(int i=0; i<7; i++)
        cout<< ar[i]<<" ";


    cout<<endl;
    return 0;
}

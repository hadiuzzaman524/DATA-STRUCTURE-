#include <iostream>

using namespace std;
void heapify(int h[],int n,int i)
{
    int largest=i;
    int low=i*2+1;
    int high=i*2+2;
    if(low<n&&h[low]>h[largest])
        largest=low;
    if(high<n&&h[high]>h[largest])
        largest=high;
    if(largest !=i)
    {
        swap(h[i],h[largest]);
        heapify(h,n,largest);
    }


}
void heapsort(int h[],int n)
{
    //for build heap
    for(int i=n/2-1; i>=0; i--)
        heapify(h,n,i);
        for(int i=n-1; i>=0; i--)
        {
            swap(h[0],h[i]);
            heapify(h,i,0);
        }
}
int main()
{
    int h[]={0,10,20,30,25,5,40,35};
    int n=sizeof(h)/sizeof(int);
    heapsort(h,n);
    for(int i=0; i<n; i++)
        cout<< h[i]<< " ";
    return 0;
}

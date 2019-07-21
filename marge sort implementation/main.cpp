#include <iostream>

using namespace std;

void marge(int ar[], int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int leftarray[n1];
    int rightarray[n2];
    for(int i=0; i<n1; i++)
    {
        leftarray[i]=ar[left+i];

    }
    for(int i=0; i<n2; i++)
    {
        rightarray[i]=ar[mid+1+i];
    }
    int hadi=0,konok=0,fahima=left;
    while(hadi<n1&&konok<n2)
    {
        if(leftarray[hadi]<=rightarray[konok])
        {
            ar[fahima]=leftarray[hadi];
            hadi++;
        }
        else
        {
            ar[fahima]=rightarray[konok];
            konok++;
        }
        fahima++;
    }
    while(hadi<n1)
    {  ar[fahima]=leftarray[hadi];
        hadi=hadi+1;
        fahima=fahima+1;
    }
    while(konok<n2)
    {  ar[fahima]=rightarray[konok];
        konok=konok+1;
        fahima=fahima+1;
    }

}
void margesort(int ar[],int l,int h)
{
    if(l<h)
    {
        int m=l+(h-l)/2;
        margesort(ar,l,m);
        margesort(ar,m+1,h);
        marge(ar,l,m,h);
    }
}
int main()
{
   int ar[]={7,2,9,4,3,8,6,1,17};
   margesort(ar,0,8);
   cout<< "result of marge sort is: "<<endl;
   for(int i=0; i<9; i++)
    cout<<ar[i]<< " ";
   cout<<endl;
    return 0;
}

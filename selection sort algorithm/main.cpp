#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "how many size of an array?";
    cin>>n;
    int a[n];
    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<=n-1; i++)
    {
        int small=i;
        for(int j=i+1; j<=n; j++)
        {
            if(a[j]<a[small])
            {
                small=j;
            }
        }
        int temp;
        if(small !=i)
        {
            temp=a[i];
            a[i]=a[small];
            a[small]=temp;
        }
    }
    for(int i=0; i<=n-1; i++)
    {
        cout<< a[i]<< " ";
    }
}

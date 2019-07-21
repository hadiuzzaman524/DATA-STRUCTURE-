#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<< "how many size of an array?";
    cin>>n;
    int a[n],b[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=2; i<=n; i++)
    {   int small=a[i];
        int j=i-1;
        while(j>0&&a[j]>small)
        {

            a[j+1]=a[j];
            j=j-1;
            for(int k=0; k<n; k++)
                cout<<a[k]<< " ";
        }
        a[j+1]=small;

    }

    for(int k=0; k<n; k++)
    {
        cout<< a[k]<< "   ";
    }
}

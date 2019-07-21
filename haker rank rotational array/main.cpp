#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int countt=0;
    for(int i=0; i<n; i++)
    {
        ar[i]=a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int temp=ar[n-1];
        int temp2=ar[0];
        ar[0]=temp;
        ar[1]=temp2;
        for(int j=2; j<n; j++)
        {
            ar[j]=a[j-1];
        }

        countt++;
        for(int i=0; i<n; i++)
        {
            a[i]=ar[i];
        }
    }
    cout<< countt<<endl;


        cout<< a[n-1]<<endl;
        cout << a[1] << endl;
}

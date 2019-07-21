#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int d;
    cin>>d;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    d=d%n;
    for(int i=d; i<n; i++)
        cout<< a[i]<<endl;
    for(int i=0; i<d; i++)
        cout<<a[i] ;
}

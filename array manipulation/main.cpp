#include <iostream>
using namespace std;

int main()
{
   int n,m,sum;
   cin>>n>>m;
   int ar[n+1]={0};
   int a,b,k;
   for(int i=1; i<=m; i++)
   {

      cin>>a>>b>>k;
      for(int j=a; j<=b; j++)
        ar[j]=ar[j]+k;
   }
   int max=0;
   for(int i=1; i<=n; i++)
    {
        if(max<ar[i])
            max=ar[i];
    }
    cout<<max<<endl;
    return 0;
}

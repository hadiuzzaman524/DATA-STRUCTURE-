#include <iostream>
#include <math.h>

using namespace std;

int main()
{  int n;
  cin>>n;
  while(n--)
  {    double s;
      long long min,max,count,big=0,number=0;
      cin>>min>>max;
      for(long long i=min; i<=max; i++)
      {  count=0;

          s=sqrt(i);
          for(long long j=1; j<=s; j++)
          {
              if(i%j==0)
              {
                  count++;
                  if(j<s)
                    count++;
              }
          }
          if(big<count)
          {
              big=count;
              number=i;
          }
      }
      cout<< "Between "<<min<<" and "<<max<<", "<<number<<" has a maximum of "<<big<<" divisors."<<endl;

  }

    return 0;
}

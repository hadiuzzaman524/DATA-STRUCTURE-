#include <iostream>
#include <stdio.h>
using namespace std;
void calculate(long long int x)
{
   if(x>=10000000)
   {  calculate(x/10000000);

       cout<< " kuti";
       x=x%10000000;
   }
   if(x>=100000)
   {
       calculate(x/100000);
       cout<< " lakh";
       x=x%100000;
   }
   if(x>=1000)
   {
       calculate(x/1000);
       cout<< " hajar";
       x=x%1000;
   }
   if(x>=100)
   {
       calculate(x/100);
       cout<< " shata";
       x=x%100;
   }
   if(x>=10)
   {
       calculate(x/10);
       x=x%10;

   }
  if(x)
   {
      printf(" %d",x);
   }



}
int main()
{
   long long int x;
   int c=1;
  while(cin>>x&&(x) !=EOF)
  {  printf("%4d. ",c++);
  if(x==0)
    cout<< " 0";
      calculate(x);
      cout<<endl;
  }

    return 0;
}

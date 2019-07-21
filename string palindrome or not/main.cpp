#include <iostream>
#include <cstring>
using namespace std;

int main()
{
   string s;
   cin>>s;
   int n=s.size();
   int low=0;
   int high=n-1;

   while(low<high)
   {
       if(s[low++] !=s[high--])
       {
           cout<< "string is not palindrome.";
           return 0;
       }
   }
    cout<< "string is palindrome";

}

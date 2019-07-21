#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;

int main()
{ int jaman;
   string str="hello world ";
   string patt="or";
    //string p=str+patt;
   int slen,ptlen;
   slen=str.size();
   ptlen=patt.size();
   int max=(slen-ptlen+1);
   for(int i=0; i<max; i++)
   {
       bool flag=true;
       for(int j=0; j<ptlen&&flag==true; j++)
       {
           if(patt[j] !=str[j+i-1])
           {
               flag=false;
           }
       }
       if(flag==true)
       {
            jaman= i;
       }
   }
   cout<< jaman<<endl;

}

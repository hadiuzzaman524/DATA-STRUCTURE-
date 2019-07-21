#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   char s[]="abcfgh";
   char s2[]="cgabc";
   int len=strlen(s);
   int len2=strlen(s2);
   int arr[len2+1][len+1];
   int big=0;
   int row,col;
   for(int i=0; i<=len2; i++)
   {
       for(int j=0; j<=len; j++)
       {
           if(i==0||j==0)
           {
               arr[i][j]=0;
           }
          else if(s2[i-1]==s[j-1])
           {
               arr[i][j]=arr[i-1][j-1]+1;
               if(big<arr[i][j])
               {
                   big=arr[i][j];
                   row=i;
                   col=j;
               }
           }
           else
           {
               arr[i][j]=0;
           }
       }
   }
   char *hadi;
   hadi=new char[big+1];
   while(arr[row][col] !=0)
   {
       hadi[--big]=s2[row-1];
       row--;
       col--;

   }
   cout<<hadi<<endl;
   return 0;
}

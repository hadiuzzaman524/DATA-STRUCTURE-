#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4;
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
   int a[4];
   a[0]=n1;
   a[1]=n2;
   a[2]=n3;
   a[3]=n4;
   int big1=0;
   for(int i=0; i<4; i++)
   {
       if(a[i]>big1)
        big1=a[i];
   }
   a[0]=big1;

      int big2=0;
   for(int i=1; i<4; i++)
   {
       if(a[i]>big2)
        big2=a[i];
   }
   a[1]=big2;
      int big3=0;
   for(int i=2; i<4; i++)
   {
       if(a[i]>big3)
        big3=a[i];
   }
   a[2]=big3;
  printf("%d ",a[0]);
  printf("%d ",a[1]);
  printf("%d ",a[2]);




    return 0;
}

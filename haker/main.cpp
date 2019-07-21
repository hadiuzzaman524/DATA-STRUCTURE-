#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
   int a;
   char ch;
   cin.ignore();
   float f;
   long int ll;
   double d;
   scanf("%d",&a);
    scanf("%ld",&ll);
   scanf("%c",&ch);
   cin.ignore();
   scanf("%f",&f);
    scanf("%lf",&d);

   printf("%d\n",a);
    printf("%ld\n",ll);
   printf("%c\n",ch);
   printf("%f\n",f);

   printf("%lf\n",d);
/*char ch;
scanf("%c",&ch);
printf("%c",ch);
*/
    return 0;
}



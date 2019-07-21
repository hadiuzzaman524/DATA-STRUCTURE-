
#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int big1=0,big2=0,big3=0;
    if(a>b&&a>c&&a>d)
    { big1=a;
    a=0;

    }
    else if(b>a&&b>c&&b>d)
    {
        big1=b;
        b=0;
    }
    else if(c>a&&c>b&&c>d)
    {
        big1=c;
        c=0;
    }
    else if(d>a&&d>b&&d>c)
    {
        big1=d;
        d=0;
    }

    if(a>b&&a>c&&a>d)
    { big2=a;
    a=0;

    }
    else if(b>a&&b>c&&b>d)
    {
        big2=b;
        b=0;
    }
    else if(c>a&&c>b&&c>d)
    {
        big2=c;
        c=0;
    }
    else if(d>a&&d>b&&d>c)
    {
        big2=d;
        d=0;
    }

  if(a>b&&a>c&&a>d)
    { big3=a;
    a=0;

    }
    else if(b>a&&b>c&&b>d)
    {
        big3=b;
        b=0;
    }
    else if(c>a&&c>b&&c>d)
    {
        big3=c;
        c=0;
    }
    else if(d>a&&d>b&&d>c)
    {
        big3=d;
        d=0;
    }
    printf("the sum of big 3 number is: %d\n", big3+big2+big1);
    return 0;
}

#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,d,n;
    c=0,d=0;
    printf("enter a number");
    scanf("%d",&n);
    a=1;
    while(1)
    {   c=a+d;
        a=d;
        d=c;

        b++;

        if(c==n)
        {   printf("fibonacci");
            break;
        }
        if(c>n)
        {   printf("not a fibonacci");
            break;
        }
    }
    return 0;
}
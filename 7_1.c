#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,d,n;
    c=0,d=0;
    printf("enter a number");
    scanf("%d",&n);
    a=1;
    do
    {   c=a+d;
        a=d;
        d=c;
       
        b++;
        printf("%d\n",c);
    } while(n>b);


    return 0;
}
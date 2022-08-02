#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,n,d,c;
    printf("enter a number");
    scanf("%d %d",&a,&b);
    c= a<b?a:b;
    for(n=1; n<=c; n++)

    {
        if(a%n==0)
            if (b%n==0)
                d=n;
    }
     if(d==1)
    printf("co prime");
    else
printf("not a co prime");

    return 0;
}
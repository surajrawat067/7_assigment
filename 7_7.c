#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,d;
    printf("enter two number");
    scanf("%d %d",&b,&c);
    for(b;c>=b;b++)
    if(b==2 | b==3) 
    printf("%d\n",b);
    else if(b%2!=0 && b%3!=0 &&b%5!=0)
        printf("%d\n",b);
    return 0;
}
#include<stdio.h>
#include<conio.h>
int main ()

{
    int a,b,c,d;
    printf("enter a number");
    scanf("%d" ,&c);
    for(b=c;b;b++)
    if(b%2!=0 && b%3!=0 &&b%5!=0)
      {  printf("%d\n",b);
        break;
        }
    return 0;
}
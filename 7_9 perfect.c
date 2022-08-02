#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()

{
    int a,b,c,e,f,x,s;
    printf("enter a number");
    scanf("%d",&a);
    s=x=a;
    while(a!=0)
    {
        c=a%10;
        a=a/10;
        e++;
    }
      while(x!=0)
    {   c=x%10;
        x=x/10;
        f=pow(c,e);
        a=a+f;
      }  
    if(a==s)
    printf("armstrong number");
    if(a!=s)
    printf("not a armstrong number");
   
    return 0;
}
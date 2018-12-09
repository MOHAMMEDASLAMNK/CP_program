#include<stdio.h>
#include<conio.h>

 void main()
{
    int i,n,a,r,c=0,s;
    clrscr();
    printf("Please,Enter a number:");
    scanf("%d",&n);
    a=n;
     while(n>0)
     {
     r=n%10;
    s=1;
     for(i=r;i>=1;i--)
     {
     s=s*i;
     }
     c=c+s;
     n=n/10;
     }
     if(c==a)
     printf("\n%d is a Krishnamurthy number.",a);
     else
     printf("\n%d is not a Krishnamurthy number.",a);
     getch();
 }

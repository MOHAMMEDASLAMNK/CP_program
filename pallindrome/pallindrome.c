#include<stdio.h>
#include<conio.h>

void main(){
    int n,r=0,x,t;
    clrscr();
    printf("Enter the number ");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        x=n%10;
        r=r*10+x;
        n=n/10;
    }
    if(t==r)
    printf("Palindrome");
    else
    printf("Not a palindrome");
    }

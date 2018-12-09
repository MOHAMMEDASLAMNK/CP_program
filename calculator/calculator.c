#include<stdio.h>
#include<conio.h>

void main()
    {
     int ch;
     float a,b,r;
     clrscr();
     do
     {
     printf("1:Addition ");
     printf("2:Subtraction ");
     printf("3:Multiplication ");
     printf("4:Division ");
     printf("5:Exit\n");
     printf("Enter your choice");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     printf("Enter two numbers");
     scanf("%f%f",&a,&b);
     r=a+b;
     printf("Result=%f\n",r);
     break;
     case 2:
     printf("Enter two numbers");
     scanf("%f%f",&a,&b);
     r=a-b;
     printf("Result=%f\n",r);
     break;
     case 3:
     printf("Enter two numbers");
     scanf("%f%f",&a,&b);
     r=a*b;
     printf("Result=%f\n",r);
     break;
     case 4:
     printf("Enter two numbers");
     scanf("%f%f",&a,&b);
     r=a/b;
     printf("Result=%f\n",r);
     break;
     }
     }
     while(ch<5);
    }

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    clrscr();
    printf("Enter Number\n");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("%d is an Even Number",num);
    }
    else
    {
        printf("%d is an ODD Number",num);
    }
    getch();
}

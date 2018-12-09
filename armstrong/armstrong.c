#include <stdio.h>
#include <conio.h>
void main()
{
    int num, NumBack,OrgiNum,a=0, rem, arm = 0;
    clrscr();
    printf("Enter a three digit integer: ");
    scanf("%d", &num);
    NumBack = num;
    while(num != 0){
        a++;
        num/=10;
    }
    OrgiNum=NumBack;
    while (NumBack != 0)
    {
        rem = NumBack%10;
        arm =arm+(pow(rem,a));
        NumBack /= 10;
    }

    if(arm == OrgiNum)
        printf("%d is an Armstrong number.",arm);
    else
        printf("%d is not an Armstrong number.",arm);

    getch();
}

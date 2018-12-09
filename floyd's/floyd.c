#include<stdio.h>
#include<conio.h>
void main(){
    int row,a=1,i,j;
    clrscr();
    printf("Enter RAW\n");
    scanf("%d",&row);
    for(i=0; i<row;i++){
        for(j=0; j<=i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    getch();
}

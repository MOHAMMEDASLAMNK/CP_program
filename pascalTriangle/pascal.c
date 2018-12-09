#include<stdio.h>
#include<conio.h>

void main(){
    int row,i,j,ncr,sp;
    clrscr();
    printf("Enter Row\n");
    scanf("%d",&row);

 for (i=0; i<row; i++){
     for(sp=0; sp<(row-i); sp++){
         printf(" ");
     }
     for(j=0; j<=i; j++){
         if(i==0 || j==0){
             ncr=1;
         }
         else{
             ncr=ncr*(i-j+1)/j;
         }
         printf("%d ",ncr);
     }
     printf("\n");
 }
 getch();
}

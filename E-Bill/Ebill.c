#include<stdio.h>
#include<conio.h>

void main(){
    int u;
    float r;
    clrscr();
    printf("Enter Unit\n");
    scanf("%d",&u);
    if(u<=200){
        r=0.5*u;
    }
    else if(201<u<=400){
        r=100+(0.65*(u-200));
    }
    else if(401<u<=600){
        r=230+(0.8*(u-400));
    }
    else{
        r=390+(1*(u-600));
    }
    printf("charge = %f",r);
    getch();

}

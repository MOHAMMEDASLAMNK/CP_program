#include<stdio.h>
#include<conio.h>

void main(){
    int i, n,ch;
    float x, sum, t,csum=1, ct=1;
    clrscr();
    printf("1-Sin series\n2-cosine series");
    scanf("%d",&ch);
    printf("Enter value of x\n");
    scanf("%f",&x);
    printf("Enter the Limit\n");
    scanf("%d",&n);

    x=x*3.14159/180;
    t=x;
    sum=x;

    switch(ch){
        case 1:
            for(i=1;i<=n;i++){
            t=(t*(-1)*x*x)/(2*i*(2*i+1));
            sum=sum+t;
        }
            printf(" The value of Sin(%f) = %.4f",x,sum);
            break;

        case 2:
            for(i=1;i<=n;i++){
             ct=ct*(-1)*x*x/(2*i*(2*i-1));
             csum=csum+ct;
        }
            printf(" The value of Cos(%f) is : %.4f", x, csum);
            break;
        default:
                printf("operation doesn't exist ");
                break;
    }
    getch();
}

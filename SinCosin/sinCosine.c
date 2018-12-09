#include<stdio.h>
#include<conio.h>

void main(){
    float r,t,s,n,x;
    int i,j,ch;
    clrscr();
    printf("1-Sin series\n2-cosine series");
    scanf("%d",&ch);
    printf("Enter value of x\n");
    scanf("%f",&x);
    printf("Enter the Limit\n");
    scanf("%f",&n);
    switch(ch) {
        case 1:
            r=(x*3.1415)/180;
            t=r;
            j=r;
            i=2;
            for(j=2; j<=n; j++){
                t=(t*(-1)*r*r)/(i*(i+1));
                s=s+t;
                i=i+2;
            }
            printf("Sin %f = %f",x,s);
            break;
        case 2:
            r=(x*3.1415)/180;
            t=1;
            j=1;
            i=1;
            for(j=2; j<=n; j++){
                t=((-1)*r*r)/(i*(i+1));
                s=s+t;
                i=i+2;
            }
            printf("cos%f = %f",x,s);
            break;
        default:
            printf("Wrong choice\n");
            break;
    }
    getch();
}

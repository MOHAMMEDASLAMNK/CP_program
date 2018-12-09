    #include<stdio.h>
    #include<conio.h>

void main(){

     float a,b,c,D,r1,r2,real,img;
     clrscr();
     printf("Enter the coefficients of quadratic equation");
     scanf("%f%f%f",&a,&b,&c);
     D=b*b-4*a*c;
     if(a==0)
        printf("Not a quadratic equation");
     else if(D==0)
     {
         r1=-b/(2*a);
         printf("roots are x=%f",r1);
     }
     else if(D>0)
     {
         r1=(-b+sqrt(D))/(2*a);
         r2=(-b-sqrt(D))/(2*a);
         printf("roots are x=%f\t x=%f",r1,r2);
     }
     else
     {
         D=-D;
         real=-b/(2*a);
         img=sqrt(D)/(2*a);
        printf("Roots are x=%f+i%f\tx=%f+i%f",real,img,real,img);
     }
     getch();
    }

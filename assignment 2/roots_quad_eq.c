#include<stdio.h>
#include<math.h>

int main(){
 double a,b,c,x,d,r1,r2;
 printf("Enter the value of a , b , c from quadratic equation\n");
 printf("a = ");
 scanf("%lf",&a);
 printf("b = ");
 scanf("%lf",&b);
 printf("c = ");
 scanf("%lf",&c);
 
 d=(b*b)-(4*a*c);

 if (d>0)
 {
   r1=(-b+sqrt(d))/(2*a);
   r2=(-b-sqrt(d))/(2*a);
   printf("root 1 = %lf , root 2 = %lf",r1,r2);
 }
 else if (d==0)
 {
   r1=(-b)/(2*a);
   r2=(-b)/(2*a);
   printf("root 1 = %lf , root 2 = %lf",r1,r2);
 }

 else if (d<0)
 {
   printf("roots are imaginary");
 }
 

    return 0;
}
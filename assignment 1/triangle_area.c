#include<stdio.h>
#include<math.h>
// this code will calculate the area of traingle when three sides are given as input
// written by 'sameer kumar sinha'

int main(){
float a,b,c,s,aot; 
 printf("Enter sides of traingle\na=");
 scanf("%f",&a);
 printf("b=");
 scanf("%f",&b);
 printf("c=");
 scanf("%f",&c);
 s=(a+b+c)/2;
 aot=sqrt((s)*(s-a)*(s-b)*(s-c));
 printf("Area of traingle = %f",aot);

    return 0;
}
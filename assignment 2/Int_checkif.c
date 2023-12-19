#include<stdio.h>
//program to check the two numbers are equal or not.(implimentation of condition statement.)
// written by 'sameer kumar sinha'
int main(){
 int a,b;
 printf("Enter two numbers\na = ");
 scanf("%d",&a);
 printf("b = ");
 scanf("%d",&b);
 printf("a = %d ,b = %d\n",a,b);
 if (a==b)
 {
  printf("These numbers are equal");
 }
 else 
 printf("These numbers are not equal");

    return 0;
}
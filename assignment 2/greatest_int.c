#include<stdio.h>
#include<math.h>
//this program finds greatest of three numbers.
int main(){
int a,b,c;
printf("Enter numbers\n");
scanf("%d%d%d",&a,&b,&c);
if (a>=b && a>=c)
printf("a= %d is the greatest number",a);
if (b>=a && b>=c)
printf("b= %d is the greatest number",b);
if (c>=a && c>=b)
printf("c= %d is the greatest number",c);
return 0;
}
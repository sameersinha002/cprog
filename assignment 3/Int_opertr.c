#include<stdio.h>
#include<math.h>

int main(){
 int a,b,r;
 char c;
 printf("Enter two numbers with operator(+,-,*,/)\n");
 scanf("%d %c %d",&a,&c,&b);
 
 switch (c)
 {
  case '+' :
    printf("Result: %d",a+b);
    break;
  case '-' :
    printf("Result: %d",a-b);
    break;
  case '*' :
    printf("Result: %d",a*b);
    break;
  case '/' :
    printf("Result: %d",a/b);
    break;
  default : printf("Invalid Input");
    break;
 
 }

    return 0;
}
#include<stdio.h>
#include<math.h>

int main(){
 int numb;
 printf("Enter Number\n");
 scanf("%d",&numb);
 numb % 2 ==0 ? printf("%d is Even Number",numb): printf("%d is Odd Number",numb);

    return 0;
} 
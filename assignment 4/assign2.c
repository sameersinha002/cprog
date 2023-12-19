#include<stdio.h>
#include<math.h>

int main (){
 int n,sn;
 printf("Enter Number\n");
 scanf("%d",&n);
 sn=0;
 for (int i = 1; i <= n; i++)
 {
   sn =sn+i;
  
 }
  printf("Sum is %d",sn);

    return 0;
}
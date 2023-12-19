#include<stdio.h>
#include<math.h> 

int main(){
 int n,factn;
 printf("Enter Number\n");
 scanf("%d",&n);
 factn=1;
 for (int i = 1; i <= n; i++)
 {
   factn=factn*i;
 }
 
 printf("factorial value is %d",factn);


    return 0;
}
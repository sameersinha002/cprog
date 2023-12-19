#include<stdio.h>
#include<math.h>
// This code calculates the sum of even numbers and odd numbers respectively.
int main(){

 int n, se,so;
 printf("Enter the Number\n");
 scanf("%d",&n);
 se=0;
 so=0;

 for (int i = 1; i<=n; i++)
 {
   if (i%2==0)
   {
      se=se+i; // code for sum of even numbers 
   }
  else
  {
   so=so+i; // code for sum of odd numbers 
  }
  
 }
  printf("Sum of Even number is %d\n",se);
 printf("Sum of Odd numbers are %d",so);

}
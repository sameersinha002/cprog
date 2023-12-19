#include<stdio.h>
#include<math.h>

int main(){
int i,n,result=0;
int arr[5];
printf("Enter the number of elements");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
 printf("Enter %d Element",i+1);
 scanf("%d",&arr[i]);
}

for ( i = 0; i < n; i++)
{
 result=result+arr[i];
}
printf("Sum is %d",result);



return 0;
}
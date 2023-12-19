#include<stdio.h>
#include<math.h>

int main(){
    int range,x;
    int count=0;
    int sum=0;
    scanf("%d",&range);
    for (int i = 1; i <= range; i++)
    {
      x=i;
      while (x>0)
     {
        x=x/10;
        count++;
     }
      x=i;
      while (x>0)
      {
        sum = sum + pow(x%10,count);
        x=x/10;
      }
     if (i==sum)
     {
      printf("%d\n",i);
     }
     count=0;
     sum=0;

     }
 return 0;
}
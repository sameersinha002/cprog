#include<stdio.h>
#include<math.h>

int main(){
int n,x,y=0;
scanf("%d",&n);

for (int i =1 ; i <n; i++)
{
    if (n%i==0)
    {
       x=i;
       return x;
    }
    y=x+y;
    return y;
}
if (y==n)
{
 printf("%d is perfect number",n);
}
else printf("%d is not perfect number",n);
return 0;

}
#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    int arr[10];
    int min, max;
    printf("Enter number of elements\n");
    scanf("%d",&n);

    for ( i=0; i<n; i++)
    {
     printf("Enter %d Element\n",(i+1));
     scanf("%d",&arr[i]);
    }

     min=max=arr[0];
    for ( i=1; i<n; i++)
    {
       if (max<arr[i])
       {
       max=arr[i];
       }
       else if (min>arr[i])
       {
        min=arr[i];
       }
     }
     printf(" %d is maxm and %d minm",max,min);

return 0;

}


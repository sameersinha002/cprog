#include<stdio.h>
#include<math.h>

int main()
{
 int num;
 printf("Enter the Day in value '1-7'\n");
 scanf("%d",&num);

switch (num)
{
case 1 : printf("Monday");
break;
case 2 : printf("Tuesday");
break;
case 3 : printf("Wednesday");
break;
case 4 : printf("Thursday");
break;
case 5 : printf("Friday");
break;
case 6 : printf("Saturday");
break;
case 7 : printf("Sunday");
break;
default : printf("Invalid Input");
break;
}
    return 0;
}
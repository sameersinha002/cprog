#include<stdio.h>
#include<math.h>
// this program will find whether a given year is leap year or not
// writhten by 'sameer kumar sinha'
int main(){
int year;
 printf("Enter Year\n");
 scanf("%d",&year);

 if (year % 400 == 0)
 {
  printf("%d is Leap year",year);
 }
 else if (year%100==0)
 {
    printf("%d is not Leap year",year);
 }
 else if (year%4==0)
 {
    printf("%d is Leap year",year);
 }
 else
 printf("%d is not Leap year",year);

    return 0;
}
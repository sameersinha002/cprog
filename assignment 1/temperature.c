#include<stdio.h>
#include<math.h>
//this c program will convert the temperature in centigrade into fahrenheit.
// written by 'sameer kumar sinha'
int main(){
 float C,F;
 printf("Enter the temperature in centigrade:\n");
 scanf("%f",&C);
 F=9*C/5+32;
 printf("Answer = %f Degree Fahrenheit.",F);

}
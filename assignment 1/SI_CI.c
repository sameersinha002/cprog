#include<stdio.h>
#include<math.h>
// Calculation of Simple Interest and Compound Interest.
// written by 'sameer kumar sinha'
int main() {
float P,R,T,SI,CI,FA;
printf("Enter the principal amount: ");
scanf("%f", &P);
printf("Enter the Annual Rate: ");
scanf("%f", &R);
printf("Enter the Time in years: ");
scanf("%f", &T);
SI=P*R*T/100;
printf("Simple Interest is: %f\n ",SI);
FA=P*pow((1+(R/100)),T);
CI=FA-P;
printf("Compound Interest is : %f",CI);






return 0;
}
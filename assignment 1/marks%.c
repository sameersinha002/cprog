#include<stdio.h>
#include<math.h>
// This code will calculate marks and overall percentage.
// written by 'sameer kumar sinha'
int main() {
 float s1,s2,s3,s4,s5,TM,TPM;
 printf("Enter the marks\n");
 printf("Subject 1: ");
 scanf("%f", &s1);
 printf("Subject 2: ");
 scanf("%f", &s2);
 printf("Subject 3: ");
 scanf("%f", &s3);
 printf("Subject 4: ");
 scanf("%f", &s4);
 printf("Subject 4: ");
 scanf("%f", &s5);
 TM=s1+s2+s3+s4+s5;
 printf("Total marks of candidate is %f\n", TM);
 TPM=TM/500*100;
 printf("Percentage of marks is %f ", TPM);
    return 0;
}
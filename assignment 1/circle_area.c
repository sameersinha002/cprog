#include <stdio.h>
// This code is used to find area and circumference of the circle.
// written by 'sameer kumar sinha'
int main() {
float pi = 3.14;
float radius;
printf("Enter the Radius\n");
scanf("%f", &radius);
printf("radius of circle is %f\n", radius);
float Area = pi*radius*radius;
printf("Area of Circle is : %f\n", Area);
float circumference=2*pi*radius;
printf("Circumference of Circle = %f",circumference);
    return 0;
}
#include<stdio.h>
//c program to swap two integers using 3rd variable.
// written by 'sameer kumar sinha'
int main(){
 int x,y,z;

 printf("Enter First Integer(x): ");
 scanf("%d",&x);

 printf("Enter Second Integer(y): ");
 scanf("%d",&y);

 z=x;
 x=y;
 y=z;

 printf("After swapping Integers x=%d , y=%d" ,x,y);

    return 0;
}
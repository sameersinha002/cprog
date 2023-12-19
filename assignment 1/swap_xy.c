#include<stdio.h>
// c program to swap integers value without using third variable.
// written by 'sameer kumar sinha'
int main(){
 int x,y;

 printf("Enter First Integer(x): ");
 scanf("%d",&x);

 printf("Enter Second Integer(y): ");
 scanf("%d",&y);
 x=x+y;
 y=x-y;
 x=x-y;
 printf("After swapping x=%d , y=%d ",x,y);

    return 0;
}
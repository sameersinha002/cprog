 #include<stdio.h>
 #include<math.h>

 int main(){
 char ch;
 printf("Enter the colour code as r,g,w,y,o\n");
 scanf("%c",&ch);

 switch (ch)
 {
 case 'r' :
 printf("Red");
 break;
 case 'g' :
 printf("Green");
 break;
 case 'w' :
 printf("White");
 break;
 case 'y' :
 printf("Yellow");
 break;
 case 'o' :
 printf("Orange");
 break;
 default : printf("Invalid Input");
 break;
 }

    return 0;
 }
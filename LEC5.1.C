// write a program to find the minimum number from given 3 numbers using the ternary operator .

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c
;
clrscr();

printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b :");
scanf("%d",&b);
printf("enter the value of c :");
scanf("%d",&c);


(a>b)?(a>c)?printf("A is mini...\n")
	   :printf("B is mini...\n")
     :(b>c)?printf("B is mini...\n")
	   :printf("C is mini...\n");


getch();
}

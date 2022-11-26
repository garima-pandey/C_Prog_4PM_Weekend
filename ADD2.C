#include<stdio.h>
#include<conio.h>

void main()
{

int a, b; // variables (vary or change) or container
// int: data type
clrscr();
printf("Enter value of a and b:");
scanf("%d%d", &a, &b);
// scanf is used to take user input at runtime/ dynamically
//&- address of operator

printf("Addition is: %d", (a + b));

getch();
}
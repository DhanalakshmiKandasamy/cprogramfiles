#include<stdio.h>
#include<conio.h>
void main()
{
char *s;
int n;
clrscr();
printf("Enter the string");
scanf("%s",s);
n=ascii(s);
printf("\nASCII value of %s is: %d",s,n);
getch();
}
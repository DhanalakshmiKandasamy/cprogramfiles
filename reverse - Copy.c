#include <stdio.h>
#include<conio.h>
void main()
{
int n,d,s=0;
clrscr();
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
	d=n%10;
	s=s*10+d;
	n=n/10;
}
printf("Reverse number is: %d",s);
}

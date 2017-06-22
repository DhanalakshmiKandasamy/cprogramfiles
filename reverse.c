#include <stdio.h>
void main()
{
int n,d,t,s=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
	d=n%10;
	s=s*10+d;
	t=n/10;
}
printf("Reverse number is: %d",s);
}

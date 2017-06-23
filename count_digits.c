#include<stdio.h>
void main()
{
int n,c=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
	d=n%10;
	c+=1;
	n=n/10;
}
printf("No of digits %d is: %d",n,c);
}
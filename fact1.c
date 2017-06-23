#include<stdio.h>
void main()
{
	int n,fact=1,i;
	printf("\nFactorial Calculation");
	printf("\nEnter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial of %d is %d ",n,fact);
}

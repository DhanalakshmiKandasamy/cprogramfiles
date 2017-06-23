#include<stdio.h>
void main()
{
	int n,fib=1,a=0,i,b=1,c;
	printf("\nEnter the number");
	scanf("%d",&n);
	printf("\nFibonacci series");
	printf("\n%d\n%d",a,b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("\n%d ",c);
		a=b;
		b=c;
		
	}
	
}
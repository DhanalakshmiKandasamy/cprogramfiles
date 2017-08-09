#include<stdio.h>
void main()
{
	int n1,n2,i,s=1;
	printf("\nEnter the Table number");
	scanf("%d",&n1);
	printf("\n Enter the ending position");
	scanf("%d",&n2);
	for(i=1;i<=n2;i++)
	{
		s=i*n1;
		printf("\n%d * %d = %d",i,n1,s);
	}
	
	
}
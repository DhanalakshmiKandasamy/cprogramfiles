#include<stdio.h>
void main()
{
int n1,n2,s=0,i,j,c=0;
printf("Enter the Initial value");
scanf("%d",&n1);
printf("\nEnter the Ending value");
scanf("%d",&n2);
for(i=n1;i<=n2;i++)
{
	for(j=2;j<i;j++)
	{
	if(i%j==0)

		break;
	}
	if(i==j)
        c=c+1;
       
	}

 printf("\nNo of prime numbers is: %d",c);
}
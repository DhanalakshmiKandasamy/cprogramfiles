#include<stdio.h>
void main()
{
int n,s=0;
printf("Enter the number");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
s=s+i;
}
printf("\nSum of Natural no upto %d is: %d",n,s);
}
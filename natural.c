#include<stdio.h>
void main()
{
int n,s=0;
printf("Enter the number");
scanf("%d",&n);
s=s+(n*(n+1))/2;
printf("\nSum of Natural no upto %d is: %d",n,s);
}
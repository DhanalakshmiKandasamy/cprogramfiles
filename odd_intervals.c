#include<stdio.h>
void main()
{
int n1,n2,s=0,i;
printf("Enter the 1st number");
scanf("%d",&n1);
printf("\nEnter the 2nd number");
scanf("%d",&n2);
printf("\nEven number series between %d and %d is: ",n1,n2);
for( i=n1;i<=n2;i++)
{
    if(i%2!=0)
    
printf("\n%d",i);
}
}
#include<stdio.h>
void main()
{
int n,s=0,d,t;
printf("Enter the number");
scanf("%d",&n);
t=n;
while(n>0)
{
	d=n%10;
	s=s+d*d*d;
	n=n/10;
}
if(t==s)
printf("\n%d is Armstrong Number",t);
else
	printf("\n%d is not Armstrong number",t);

}
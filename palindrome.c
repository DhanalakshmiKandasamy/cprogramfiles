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
	s=s*10+d;
	n=n/10;
}
if(t==s)
printf("%d is palindrome",n);
else
	printf("%d is not palindrome",n);

}
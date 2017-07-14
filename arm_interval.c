#include<stdio.h>
int main()
{
int n1,n2,d,s=0,t,i;
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
d=n1%10;
s=s+d*d*d;
n1=n1/10;
}
if(n1==s)
printf("%d",n1);
}

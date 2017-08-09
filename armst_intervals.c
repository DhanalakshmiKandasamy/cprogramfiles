#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,s,t,i,d;
//clrscr();
printf("\nArmstrong Number");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
	s=0;
	t=i;
	while(i>0)
	{
		d=i%10;
		s=s+d*d*d;
		i=i/10;
	}

	if(t==s)
		printf("%d ",t);
}

return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char a[10],t;
	int l=1,i=0;
	printf("\nEnter the string");
	scanf("%s",a);
	l=strlen(a)-1;
    while(i<l)
    {
    	t=a[i];
    	a[i]=a[l];
    	a[l]=t;
    	i++;
    	l--;
    }
 
	printf("\nReverse String: %s",a);
	return 0;
}
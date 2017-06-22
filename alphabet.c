#include<stdio.h>
int main()
{
	char c;
printf("\nEnter the character");
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("\n%c is alphabet",c);
else
printf("\n%c is number",c);
return 0;
}
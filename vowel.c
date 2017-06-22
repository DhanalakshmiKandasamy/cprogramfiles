#include<stdio.h>
int main()
{
char c;
printf("\nEnter the character");
scanf("%c",&c);
if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
printf("\n%c is Vowel",c);
else
printf("\n%c is Consonant",c);
return 0;
}

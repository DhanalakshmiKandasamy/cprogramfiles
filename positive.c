#include<stdio.h>

void main() 
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>0)
    printf("\nGiven number %d is Positive",n);
    else if(n<0)
    printf("\nGiven number %d is Negative",n);
    else
    printf("\nGiven number is Zero",n);
  }
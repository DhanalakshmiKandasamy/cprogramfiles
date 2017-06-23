#include <stdio.h>
int  main()
{
    int y=0;
    printf("Enter the year");
    scanf("%d",&y);
    if(y%4==0)
    printf("\n%d is leap year",y);
    else
    printf("\n%d is not leap year",y);
   return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int x,y,a;
    scanf("%d %d",&x,&y);
    a=(x>y)?x:y;
    while(1)
    {
        if((a%x==0)&&(a%y==0))
            return a;
        a++;

    }

}

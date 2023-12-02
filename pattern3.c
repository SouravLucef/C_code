#include <stdio.h>
void main()
{
    int i,j,k,n=1;
    for(i=5;i>=0;i--)
    {
        for (j= i;j>=0;j--)
        {
            printf(" ");
        }
        
        for(k=1;k<=n;k++)
        {
            printf("*");
        }

        printf( " \n");
        n+=2;
    }
}
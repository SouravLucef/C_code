#include <stdio.h>
void main()
{
    int n,i, data[n];
    printf("Enter the elements : \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("The Output list is : " );
    for (i=0;i<5;i++){
    printf(" %d",data[i]);
    }
}
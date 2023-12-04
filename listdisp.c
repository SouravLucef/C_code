#include <stdio.h>
void main()
{
    int i,data[5];
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
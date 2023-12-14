#include <stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the num of elements : \n");
    scanf("%d",&n);
    int data[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("The Output list is : " );
    for (i=0;i<n;i++){
    printf(" %d",data[i]);
    }
}
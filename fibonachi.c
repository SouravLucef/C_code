#include <stdio.h>
void main()
{
    int n,i,a=0,b=1,c=0;

    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=0;i<n-2;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;


    }

}
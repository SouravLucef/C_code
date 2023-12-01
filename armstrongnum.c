#include <stdio.h>
void main()
{
    int n,i,r,s=0;
    printf("Enter the number :  ");
    scanf("%d",&n);

    for (i=n;i>0;)
    {
        r=i%10;
        s=s+(r*r*r);
        i=i/10;
    }

    if(s==n)
    {
        printf("The number %d is a Armstrong number",n);

    }
    else{
        printf("The Number %d is no an armstrong number. ",n);
    }
}
#include <stdio.h>
void main()
{

    int i,n,s=0;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n){
        printf("%d is a perfect number ",n);
    }
    else{
        printf("%d is not a perfect no.",n);
    }
    
}
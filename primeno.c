#include <stdio.h>
int main()
{
    int n,i,c=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0){
        printf("The number you have entered is a negative number enter a positive number !!");
    }
    else if(n==1 || n==0)
    {
        c=1;

    }
    
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;

        }
    }

    if(c==0){
        printf(" %d is a prime number",n);

    }
    else{
        printf(" %d is not a prime number",n);
    }


}
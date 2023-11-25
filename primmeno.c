#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<0){
        printf("you have entered a negative number");

    }
    else {
        for( i=1;i<=n;i++){
            if(n%i==0){
                c=c+1;
            }

        }
        if(c==2){
            printf("the number is prime number");
        }
        else{
        printf("The number is non prime number");
        }

    }
    return 0;
}
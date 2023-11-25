#include<stdio.h>
int main()
{
    int n,i,c=0;
    printf("Enter the number: ");
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
            printf("the number %d is prime number",n);
        }
        else{
        printf("The number %d is non prime number",n);
        }

    }
    return 0;
}
#include <stdio.h>
void main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n%2==0){
        printf("The number %d you have entererd is an even number ",n);

    }
    else{
        printf("The number %d that you have entered is a odd number",n);
    }
}
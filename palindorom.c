#include<stdio.h>
int main()
{
    int num,n,rev=0,rem;
    printf("Enter the number :");
    scanf("%d",&num);
    n=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    
    if(n==rev){
        printf("The number %d is a Palindrom number ...",n);

    }
    else{
        printf("The number %d is not a Plaindrom number...",n);
    }
    return 0;
}
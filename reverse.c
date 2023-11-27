#include <stdio.h>
int main()
{
    int n,r,S=0,i;
    printf("Enter num :");
    scanf("%d",&n);

    for (i=n;i>0;){
        r=i%10;
        S=S*10+r;
        i=i/10;


    }
    printf("the reversed number is %d",S);

    return 0;
}
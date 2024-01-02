// the numbers are amicable if the sum of the factors of the two are the offosit numbers

#include<stdio.h>
void main()
{
    int n,m,i,j,s1=0,s2=0;
    printf("Enter number 1 :");
    scanf("%d",&n);
    printf("Enter number 2 :");
    scanf("%d",&m);

    for(i=1;i<n;i++)
    {
        if(n%i==0){
            s1=s1+i;
            }
    }

    for(j=1;j<m;j++)
    {
        if(m%j==0)
        {
            s2=s2+j;
        }
    }
    if((s2==n) && (s1==m)){
        printf("The numbers %d and %d are amicable numbers",n,m);
    }
    else{
        printf("The numbers are not amicable");
    }



}
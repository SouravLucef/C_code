#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n;

printf("Enter n : ");
scanf("%d",&n);
while(i<=n)
{
printf("%d\t",i);
i=i+2;
}
getch();
}
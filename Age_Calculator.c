#include <stdio.h>

int main()
{
int P_year,P_month,P_day,B_year,B_month,B_day,Days,Months,Years;


printf("Enter the Birth Day : ");
scanf("%d",&B_day);
printf("Enter the Birth Month : ");
scanf("%d",&B_month);
printf("Enter the Birth Year : ");
scanf("%d",&B_year);

printf("Enter the Present day : ");
scanf("%d",&P_day);
printf("Enter the Present month : ");
scanf("%d",&P_month);
printf("Enter the Present Year : ");
scanf("%d",&P_year);



printf("Your date of Birth is : %d / %d / %d \n \n " ,B_day,B_month ,B_year);

	if(P_year < B_year)
	{
	printf("Please check your values there is some mistake");
	
	}
	else 
	{
		if (P_day < B_day)
		{
		P_month=P_month-1;
		P_day=P_day+30;
		}
		
		if (P_month < B_month)
		{
		P_year = P_year-1;
		P_month = P_month+12;
		}
		
		Days = P_day - B_day;
		Months = P_month - B_month;
		Years = P_year - B_year;
		
		printf(" Your age is %d Years %d Months and %d Days", Years,Months,Days);
	}
	
}


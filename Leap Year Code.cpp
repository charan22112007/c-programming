/*Leap year Code*/
#include<stdio.h>
main()
{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	if((year%400==0)||((year%4==0)&&(year%100!=0)))
	{
		printf("\n %d is a Leap year",year);
	}
	else
	{
		printf("\n %d is Not a Leap year",year);
	}
}

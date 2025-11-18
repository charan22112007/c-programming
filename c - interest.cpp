#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("\nEnter the Principal amount(p) : ");
	scanf("%f",&p);
	printf("\nEnter the time in year(t) : ");
	scanf("%f",&t);
	printf("\nEnter rate in percent(r) : ");
	scanf("%f",&r);
	si=((p*t*r)/100);
	ci=p*pow(1+r/100,t)-1;
	printf("\nSimple Interest : %.2f",si);
	printf("\nCompound Interest : %.2f",ci);
}

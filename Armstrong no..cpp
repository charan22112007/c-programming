#include<stdio.h>
#include<math.h>
main()
{
int n,r=0,s=0,c=0,t;
printf("Enter a Number : ");
scanf("%d",&n);
c=(int)log10(n)+1;
t=n;
while(n>0)
{
	r=n%10;
	s=s+pow(r,c);
	n=n/10;
}
if(t==s)
{
	printf("\n%d is an Armstrong Number.",t);
}
else
{
	printf("\n%d is not an Armstrong Number.",t);
}
}

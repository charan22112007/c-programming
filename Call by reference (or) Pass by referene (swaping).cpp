//Call by reference (or) Pass by referene
//Using pointers
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
main()
{
	int a,b;
	printf("Enter the two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before swaping a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swaping a=%d and b=%d",a,b);
}

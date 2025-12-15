//Pointer Arithmetics
#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},i;
	int *ptr;
	ptr=&a[0];
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	}
}

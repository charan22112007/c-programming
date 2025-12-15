//Differeent between the pointers
#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50},diff;
	int *ptr1,*ptr2;
	ptr1=&a[0];
	ptr2=&a[2];
	diff=ptr2-ptr1;
	printf("\nptr2-ptr1=%d",diff);
	printf("\nptr1-ptr2=%d",ptr1-ptr2);
	ptr2=ptr1-1;
	printf("\nptr2 pointing value = %d",*ptr2);
}

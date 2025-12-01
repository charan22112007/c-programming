//Pointers 
/*  %x is used to print the addresses  
	%u can aslo be used to print the addresses but %u is certainly prints only +ve integers,
	but actually the addresses are in hexadecimal format, so, we use %x for printing the addresses	*/
#include<stdio.h>
main()
{
	int a=10,*ptr;
	ptr=&a;
	printf("Value of the a is		 %d",a);
	printf("\nAddress of a is 		 %x",&a);
	printf("\nThe value of ptr is		 %x",ptr);
	printf("\nThe address of ptr is		 %x ",&ptr);
	printf("\nThe ptr printing value is	 %d",*ptr);
}

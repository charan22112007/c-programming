/*	Types of pointers	
		1. Typed pointers	
		
			syn: Datatype *identifer 
			
		2. Untyped/Void/Generic Pointers
		
			syn: void *identifier	*/
#include<stdio.h>
main()
{
	int a=10;
	float b=14.3;
	void *ptr;
	ptr=&a;
	printf("The value of ptr is 		%x",ptr);
	printf("\nThe address of ptr 		%x",&ptr);
	printf("\nptr pointing value is 		%d",*(int*)ptr);
	ptr=&b;
	printf("\nThe value of ptr is 		%x",ptr);
	printf("\nThe pointing value of ptr is 	%f",*(float*)ptr);
}

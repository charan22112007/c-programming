/* 4. Pointer to pointer/Doiuble pointer 
		Can store the memory address of the pointer variables
		syn: Datatype **identifier 	*/
#include<stdio.h>
main()
{
	int a=2468,*ptr,**dptr;
	ptr=&a;
	dptr=&ptr;
	printf("The vlue of a 			= 		%d",a);
	printf("\nThe address of a 		= 		%x",&a);
	printf("\nThe value of ptr 		= 		%x",ptr);
	printf("\nThe pointing value of ptr 	= 		%d",*ptr);
	printf("\nThe value of dptr 		= 		%x",dptr);
	printf("\nThe address of dptr 		= 		%x",&dptr);
	printf("\nThe pointing value of dptr 	= 		%d",**dptr);
}

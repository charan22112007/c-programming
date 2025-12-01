/* 3. Null pointers 
			The pointer variables assigned to null values	
			syn: Datatype *identifer=NULL	*/
#include<stdio.h>
main()
{
	int *ptr=NULL;
	printf("The address of ptr = %x",&ptr);
	printf("\nThe value of ptr = %d",ptr);
}

//Dynamic Memory Allocations
/*
		these memories are stored in the HEEP memory, while other scanf programs memory is store in the stat memory
		in stat memory it automatically clears the allocated values in the memory
		where as these dynamic memory allocations do not clear the allocated memory values.
		initially malloc has the garbage vlues.
		1. malloc()-------\
		2. calloc()-------->these three are memory allocating functions.And for these functions we should only deallocate the memory.
		3. realloc()------/
		4. free() --------->this is for deallocating the memory.
		
			For these we should use <stdlib.h> headet file
	1. melloc()  ------> full form is memory allocstion
		syn: ptr=(type cast)malloc(size);
		Example : 
			int *ptr=(int*)malloc(n*sizeof(int));
		malloc() is mainly ised for syructures
		maooc allocates single block of memory */
#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,*ptr,n;
	printf("\nEnter the no. of elements that you wish to enter : ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",*(ptr+i));
	}
	free(ptr);
}

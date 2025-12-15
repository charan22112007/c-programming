//Dynamic Memory Allocations
/*
		1. malloc()----\
		2. calloc()-------->these three are memory allocating functions.
		3. realloc()---/
		4. free() --------->this is for deallocating the memory.
		
			For these we should use <stdlib.h> headet file
	1. melloc()  ------> memory allocstion
		syn: ptr=(type cast)malloc(size);
		malloc() is mainly ised for syructures*/
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
}

/*2. calloc()
		full form is continuous memory, the initial values of calloc are zeros,
		syn: ptr=(type cast)calloc(n,size);
		Example :
			int *ptr=(int*)calloc(n,sizeof(int));		*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,i,*ptr;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("\nEnter the array values : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nThe given values are : ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",*(ptr+i));
	}
	free(ptr);
}

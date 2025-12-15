/*3. realloc()
		It will give the extra memory for another allocated memory 
		syn: ptr=realloc(ptr,size);	*/
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
	ptr=(int*)realloc(ptr,6*sizeof(int));
	printf("\nEnter the array values : ");
	for(i=0;i<6;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nThe given values are : ");
	for(i=0;i<6;i++)
	{
		printf("\t%d",*(ptr+i));
	}
	free(ptr);
}

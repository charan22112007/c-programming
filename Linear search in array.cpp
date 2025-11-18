/*Linear Search
	also called as a sequencial search*/
#include<stdio.h>
int main()
{
	int a[100],n,search,i,f=0;
	printf("Enter any array size : ");
	scanf("%d",&n);
	//eEntering part
	
	for(i=0;i<n;i++)
	{
		printf("\n\tEnter Value at a[%d] element : ",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter seaching element : ");
	scanf("%d",&search);
	//Searching part
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			printf("\nSearch element found at %d location ",i);
			f=1;
			break;
		}
	}
	if(f==0)
	{
		printf("\nSearching element not found....");
	}
	return(0);
}

#include<stdio.h>
void main()
{
	int a[5],i;
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}

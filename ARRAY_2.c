#include<stdio.h>
void main()
{
	int a[50],i,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

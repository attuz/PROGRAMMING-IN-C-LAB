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
	printf("Array elements in reverse are:\t");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}

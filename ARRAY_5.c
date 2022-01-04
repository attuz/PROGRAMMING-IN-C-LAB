#include<stdio.h>
void main()
{
	int a[50],i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of array elements are:%d",sum);
	
}

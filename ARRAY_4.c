#include<stdio.h>
void main()
{
	int a[50],i,n,l;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
			l=a[i];
	}
	printf("The largest element in array is: %d",l);
}

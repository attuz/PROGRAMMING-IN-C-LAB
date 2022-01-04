#include<stdio.h>
void main()
{
	int a[50],i,n,s;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
			s=a[i];
	}
	printf("The smallest element in array is: %d",s);
}

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter no. of rows:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("*\t");
		}
		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter no. of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d \t",i);
		}
		printf("\n");
	}
}

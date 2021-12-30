#include<stdio.h>
void main()
{
	int n,a=0,b=1,i,c;
	printf("Enter limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}

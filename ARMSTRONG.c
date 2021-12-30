#include<stdio.h>
void main()
{
	int n,r,temp,sum=0,c;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(sum==temp)
		printf("%d is an Armstrong number",temp);
	else
		printf("%d is not an Armstrong number",temp);
		
}

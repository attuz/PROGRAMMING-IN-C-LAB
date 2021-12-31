#include<stdio.h>
void main()
{
	int ch,n,i,fact=1,count=0,temp,r,c,sum=0,a=0,b=1;
	while(ch!=8)
	{	
		printf("\n***MENU***\n");
		printf("1.FACTORIAL OF A NUMBER\n 2.PRIME OR NOT\n 3.ODD OR EVEN\n 4.ARMSTRONG OR NOT\n 5.FIBONACCI SERIES\n 6.PERFECT OR NOT\n  7.PALINDROME OR NOT\n 8.EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("FACTORIAL OF A NUMBER\n");
				printf("Enter a number:");
				scanf("%d",&n);
				fact=1;
				for(i=n;i>0;i--)
				{
					fact=fact*i;
				}
				printf("Factorial of a %d is %d \n",n,fact);
				break;
			case 2:
				printf("PRIME OR NOT\n");
				printf("Enter a number:");
				scanf("%d",&n);
				count=0;
				for(i=1;i<=n;i++)
				{
					if(n%i==0)
					{
						count++;
					}
				}
				if(count==2)
				{
					printf("%d is a prime number\n",n);
				}
				else
				{
					printf("%d is not a prime number\n",n);
				}
				break;
			case 3:
				printf("ODD OR EVEN\n");
				printf("Enter a number:");
				scanf("%d",&n);
				if(n%2==0)
					printf("%d is an even number\n",n);
				else
					printf("%d is an odd number\n",n);
				break;
			case 4:
				printf("ARMSTRONG OR NOT\n");
				printf("Enter a number:");
				scanf("%d",&n);
				temp=n;
				sum=0;
				while(n>0)
				{
					r=n%10;
					c=r*r*r;
					sum=sum+c;
					n=n/10;
				}
				if(sum==temp)
					printf("%d is an Armstrong number\n",temp);
				else
					printf("%d is not an Armstrong number\n",temp);
				break;
			case 5:
				printf("FIBONACCI SERIES\n");
				printf("Enter limit:");
				scanf("%d",&n);
				a=0;
				b=1;
				for(i=1;i<=n;i++)
				{
					printf("%d\t",a);
					c=a+b;
					a=b;
					b=c;
				}
				break;
			case 6:
				printf("PERFECT OR NOT\n");
				printf("Enter a number:");
				scanf("%d",&n);
				sum=0;
				for(i=1;i<n;i++)
				{
					if(n%i==0)
					{
						sum=sum+i;
					}
				}
				if(sum==n)
				{
					printf("%d is a perfect number\n",n);
				}
				else
				{
					printf("%d is not a perfect number\n",n);
				}
				break;
			case 7:
				printf("PALINDROME OR NOT\n");
				printf("Enter a number:");
				scanf("%d",&n);
				temp=n;
                                sum=0;
				while(n>0)
				{
					r=n%10;
					sum=sum*10+r;
					n=n/10;
				}
				if(sum==temp)
					printf("%d is a palindrome number",temp);
				else
					printf("%d is not a palindrome number",temp);
				break;
			case 8:
				printf("EXIT\n");
				break;
		}
	}
}

			

#include<stdio.h>
void SI();
void main()
{
	SI();
}
void SI()
{
	float P,R,T,result;
	printf("Enter principal,rate,time:");
	scanf("%f%f%f",&P,&R,&T);
	result=(P*R*T)/100;
	printf("Simple Interest=%f",result);
}

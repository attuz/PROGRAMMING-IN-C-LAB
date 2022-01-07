#include<stdio.h>
void CF();
void FC();
void main()
{
	CF();
	FC();
}
void CF()
{
	float C,F=0;
	printf("Enter degree in Celcius:");
	scanf("%f",&C);
	F=1.8*C+32;
	printf("The temperature in Fahrenheit is %f \n",F);
}
void FC()
{
	float C=0,F;
	printf("Enter degree in Fahrenheit:");
	scanf("%f",&F);
	C=(F-32)/1.8;
	printf("The temperature in celcius is %f",C);
}

#include<stdio.h>
void convert();
void main()
{
	convert();
}
void convert()
{
	int days,years,months,weeks;
	printf("Enter number of days:");
	scanf("%d",&days);
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	weeks=days/7;
	days=days%7;
	printf("Years: %d\n",years);
	printf("Months:%d\n",months);
	printf("Weeks: %d\n",weeks);
	printf("Days: %d\n",days);
}

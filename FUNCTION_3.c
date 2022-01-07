#include<stdio.h>
#define PI 3.14
void square(int);
void rectangle(int,int);
void circle(float);
void main()
{
	int s,l,b;
	float r;
	printf("Enter side of square:");
	scanf("%d",&s);
	printf("Enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);
	printf("Enter radius of circle:");
	scanf("%f",&r);
	square(s);
	rectangle(l,b);
	circle(r);
}
void square(int s)
{
	int area;
	area=s*s;
	printf("Area of square= %d",area);
}
void rectangle(int l, int b)
{
	int area;
	area=l*b;
	printf("Area of rectangle=%d",area);
}
void circle(float r)
{
	float area;
	area=PI*r*r;
	printf("Area of circle=%f",area);
}

#include<stdio.h>
#include<conio.h>
void create();
void main()
{
  clrscr();
  create();
  getch();
}
void create()
{
   int a[25],n,i=0;
   printf("ENTER THE NUMBER OF ELEMENTS:");
   scanf("%d",&n);
   printf("ENTER THE ELEMENTS:");
   while(i<=n-1)
      {
        scanf("%d",&a[i]);
         i++;
       }
     printf("THE RESULTANT ARRAY IS:");
{
   for(i=0;i<n;i++)
    {
       printf("%d\t",a[i]);
}
      }
   }

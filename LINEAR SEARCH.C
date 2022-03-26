#include<stdio.h>
int main()
{
  int ar[100], n, item, pos=1, i ;
  printf("Enter the length of the array : ");
  scanf("%d", &n);
  printf("Enter array elements: ");
  for(i=0; i<n; i++)
    scanf("%d", &ar[i]);
  printf("Enter element to search: ");
  scanf("%d",&item);
  for(i=0; i<n; i++) {
    if(ar[i]==item) {
      printf("%d found at position %d\n", item, i+1);
      pos++;
      return 0;
    }
  }
  if (pos==1)
    printf("%d not found.\n", item);
    return 0;
}

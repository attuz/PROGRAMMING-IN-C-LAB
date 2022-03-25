#include <stdio.h>
void Create();
void Display();
void Insert();
void Delete();
int n,a[100],i,s,pos,ele;
int main() {
    do{
    printf("The Array operations are\n");
    printf("1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\n");
    printf("Enter your choice");
    scanf("%d",&s);
    switch(s){
        case 1:Create();
        break;
          case 2:Insert();
        break;
        case 3:Delete();
        break;
         case 4:Display();
        break;
    }
    }while(s!=5);
    return 0;
}

void Create(){
    printf("Enter the size of the Array");
    scanf("%d",&n);
     printf("Enter the  Array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array created\n");
}
void Display(){
     printf("The array elements are\n");
   
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void Insert(){
    i=n;
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the element");
    scanf("%d",&ele);
while(i>=pos)
{
    a[i+1]=a[i];
    i=i-1;
}
n=n+1;
a[pos] = ele;
    printf("Array Element Inserted\n");
}
void Delete(){
    printf("Enter the position you want to delete");
    scanf("%d",&pos);
    i=pos;
    while(i<=n-1){
         a[i+1]=a[i];
          i=i+1;
    }
    n= n-1;
     printf("Array element deleted\n");
}


// intserting of an element in an array at the given size 

#include<stdio.h>
void main()
{
    int element,position,size,i,a[50];
    printf("Enter the size of an array ");
    scanf("%d",&size);
    printf("Enter the elements of in an array ");
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to insert");
    scanf("%d",&element);
    printf("Enter the position you want to insert");
    scanf("%d",&position);
    for(i=size-1;i>=position;i--)
    {
        a[i+1]=a[i];    
    }
      a[position]=element;
    size=size+1;
    printf("\n Array after insertion ");
    for(i=0;i<=size-1;i++)
    {
        printf("\n %d",a[i]);
    }
}
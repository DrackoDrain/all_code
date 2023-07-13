// Write a program to delete an element from an array 

#include<stdio.h>
void main()
{
    int a[50],n,pos,i;
    printf("enter the size of an array ");
    scanf("%d",&n);
    
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements before deletion ");
    for(i=0;i<n;i++)
    {
        printf(" \n %3d",a[i]);
    }
    printf("\n Enter the position you waNt to delete");
    scanf("%d",&pos);

    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("\n array elements after deletion");
    for(i=0;i<n;i++)
    {
        printf("\n %3d",a[i]);
    }

}
// Write a program to insert an element into an  array 

#include<stdio.h>
int main()
{
    int a[50],n,pos,element,i;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    printf("\n enter %d elements of an array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Array before insertion");
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
        printf("\n enter position");
        scanf("%d",&pos);

        printf("Enter the element you want to insert ");
        scanf("%d",&element);
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=element;
        n=n+1;
        printf(" \n array after insertion ");
        for(i=0;i<n;i++)
        {
            printf("%3d",a[i]);
        }
        return 0;
}
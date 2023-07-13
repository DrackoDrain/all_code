// Write a program to input elements in array and print them 

#include<stdio.h>
int main()
{
    int a[10],i,n;
    printf("enter the size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements are \n");
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}
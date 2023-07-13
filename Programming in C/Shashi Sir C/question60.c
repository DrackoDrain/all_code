// Write a program to find the largest number among ten nunebers using array 

#include<stdio.h>
void main()
{
    int a[10],i,large;
    printf("Enter ethe elements of array ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    for(i=0;i<=9;i++)
    {
        if(a[i]>  large)
        {
            large=a[i];
        }

    }
    printf("Largest number =%d",large);
}
// Write a program to swap two variables with using third variable using call by value in function //
// bottom up  approach //

#include<stdio.h>
int i,j,k;
void swap(int i,int j)
{
    printf("Enter the value of i and j");
    scanf("%d%d",&i,&j);
    k=i;
    i=j;
    j=k;
    printf("after swapping i=%d",i);
    printf("after swapping j=%d",j);
}
void main()
{
    swap(i,j);
}
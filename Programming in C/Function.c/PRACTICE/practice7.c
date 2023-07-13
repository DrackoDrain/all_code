// Write a program to swap two variable with using third variable using call by value in function //
// top down approach //

#include<stdio.h>
int i,j,k;
void swap(int i,int j);
void main()
{
    printf("enter the value of i and j");
    scanf("%d%d",&i,&j);
    swap(i,j);
}
void swap(int i,int j)
{
    k=i;
    i=j;
    j=k;
    printf("i=%d",i);
    printf("j=%d",j);
}

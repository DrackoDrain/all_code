// Write a program to swap two variable using third variable using call by reference //

#include<stdio.h>
int i,j,k;
void swap(int *i,int *j)
{
    
    k=*i;
    *i=*j;
    *j=k;
   
}
void main()
{
    printf("enter the value of i and j");
    scanf("%d%d",&i,&j);
    swap(&i,&j);
     printf("swapped value of i=%d",i);
    printf("swapped value of j=%d",j);
}
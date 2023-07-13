//Write a program to check a numbr whether it is positive,negative or zero using simple if//
#include<stdio.h>
void main()
{
    int x;
     printf("enter a number ");
     scanf("%d",&x);
     if(x>0)
     {
         printf("given number is positive");
     }
     if(x<0)
     {
        printf("given number is negative");
    
     }
     if(x==0)
     {
         printf("given numnber is zero");
     }
}
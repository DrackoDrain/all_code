// Write a program to swap two variables using third variables using call by reference //

#include<stdio.h>
int swap(int *x,int *y);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
     printf("x=%d",x);
    printf("y=%d",y);
  
}
int swap(int *x,int *y)
{
    z=*x;
    *x=*y;
    *y=z;
   
}

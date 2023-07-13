// W,rite a program to add two numbers using pointers //

#include<stdio.h>
void main()
{
    int x,y,z;
    int *p,*q;
    p=&x;
    q=&y;
    printf("Enter the value of x and y");
    scanf("%d%d",p,q);
    z=*p+*q;
    printf("sum=%d",z);
}
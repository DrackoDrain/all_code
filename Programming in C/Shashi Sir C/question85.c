// Write a program to add ten numbers using pointers //

#include<stdio.h>
void main()
{
    int a[10],i,*ptr,s=0;
    ptr=&a[0];
    printf("enter any number");
    for(i=1;i<=10;i++)
    {
        scanf("%d",ptr);
        ptr++;
      
    }
    ptr--;
    
    for(i=1;i<=10;i++)
    {
        s=s+*ptr;
        ptr--;
    }
    printf("sum=%d",s);
}
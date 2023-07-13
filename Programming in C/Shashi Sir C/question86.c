// Write a program to find largest number among ten numbers using array-pointers //

#include<stdio.h>
void main()
{
    int *ptr,*qtr,i,max,a[10];
    ptr=&a[0];
    qtr=&a[0];
    printf("enter ten numbers");
    for(i=1;i<10;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    qtr++;
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(*qtr>max)
        {
            max=*qtr;
            qtr++;
        }
       
    }
    printf("largest number=%d",max);
    
}
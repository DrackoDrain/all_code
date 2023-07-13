// Write a program to find recursion of n number using function //


#include<stdio.h>
int n;
void display(int n)
{
    if(n<1) 
    {
        return 1;
    }
    
    else
    {
        printf("%d",n);
        display(n-1);
        printf("%d",n);
    }
}
void main()
{
    
    printf("Enter the value of n");
    scanf("%d",&n);
    display(n);
}
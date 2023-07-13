// Write a program to find sum of a number using function re-cursion //

#include<stdio.h>
int sum(int n);
int n;
int s;
void main()
{
    printf("enter a number");
    scanf("%d",&n);
   s= sum(n);
    printf("sum=%d",s);

}
int sum(int n)
{
    if(n==1)
    {
        return(1);
    }
    else
    {
        s=n+sum(n-1);
    }
    return(s);
}
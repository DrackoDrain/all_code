// Write a program to calculate sum of any digit number using the recursion function 
#include<stdio.h>
int sod(int n1);
void main()
{
    int n,s;
    printf("Enter any number");
    scanf("%d",&n);
    s=sod(n);
    printf("sum of digit = %d",s);
}
int sod(int n)
{
    int r,s=0;
    if(n==0)
    {
        return s;
    }
    else{   
        while(n>0)
        {
          r=n%10;
          s=s+r;
          n=n/10; 
        }    
    } 
    return s;
}
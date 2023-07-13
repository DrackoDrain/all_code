// Recursion in c //

#include<stdio.h>
int n;
void display(int n)
{
  
    if(n<1)
    return ;

    else{
    printf("%d",n);
    display(n-1);
    printf("%d",n);}
}
void main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    display(n);
}
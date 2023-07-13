// Recursion in c top down //

#include<stdio.h>
int n;
void sky(int n);
void main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    sky(n);
}
void sky(int n)
{
    if(n<1)
    return ;
    else{
        printf("%d",n);
        sky(n-1);
        printf("%d",n);
    }
}
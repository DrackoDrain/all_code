#include<stdio.h>
void main()
{
    int m,n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("\n %d",m);
    }
}
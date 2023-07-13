#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,m;
    printf("enter any number");
    scanf("%d",&n);
    printf("\n table of %d",n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("\n %d",m);
        
    }
}
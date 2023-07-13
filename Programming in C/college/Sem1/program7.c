#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,c=0;
    printf("enter any number");
    scanf("%d",&n);
    for(i=2;i<=10;i++)
    {
        if(n%2==0)
        {
            c++;

        }
    }
    if(c>1)
    {
        printf("\n not prime number");
    
    }
    else
    {
        printf("\n  prime number");

    }
}
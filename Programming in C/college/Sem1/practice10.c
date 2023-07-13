#include<stdio.h>
#include<conio.h>
int main()

{
    int n,i,c=0;
    printf("enter the value of number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          c++;
        }
    }
    if(c>2)
    {
        printf("not prime number");
    
    }
    else{
        printf("\n prime number");
    }
}
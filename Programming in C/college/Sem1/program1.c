#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev=0,rem;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
        printf("\n reverse of digit %d",rev);
         getch();
}
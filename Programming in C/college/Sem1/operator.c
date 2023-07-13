#include<stdio.h> 
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b); 
    c=(a>b)? a:b;
    printf("\n large no is=%d",c);
    getch();
}
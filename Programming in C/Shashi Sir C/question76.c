// Function taking no argument but return a value //
// Category 3 //

#include<stdio.h>
int sum(void);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    z=sum();
    printf("sum=%d",z);
    getch();
}
int sum(void)
{
    z=x+y;
    return(z);
}
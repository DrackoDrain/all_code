// Function taking no argument and do not return any value //
// Category 1 //

#include<stdio.h>
void sum(void);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    sum();
    getch();

}
void sum(void)
{
    z=x+y;
    printf("sum=%d",z);
}
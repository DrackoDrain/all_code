// function taking argument with return type //

#include<stdio.h>
int x,y,z;
int sum(int x,int y);
void main()
{
    sum(x,y);

}
int sum(int x,int y)
{
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
}

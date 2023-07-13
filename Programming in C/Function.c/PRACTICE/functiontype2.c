// function taking argument but no return type //

#include<stdio.h>
int x,y,z; //global declaration //
void sum(int x,int y); //function prototype //
void main()
{
    sum(x,y); //calling function //
}
void sum(int x,int y) // function declaration //
{
    printf("enter the vallue of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
}
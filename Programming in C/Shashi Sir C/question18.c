//write a program to find largest number among two numbers using simple if//

#include<stdio.h>
void main()
{
    int x,y;
    printf("enter the two numbers ");
    scanf("%d%d",&x,&y);
    if(x>y)
    
    {
        printf("largest =%d",x);
    }
    if(x<y)
    {
        printf("largest number=%d",y);
    }
}
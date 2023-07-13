// Write a program to find largest number among 3 numbers using else-if ladder//

#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the three numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y&&x>z)
    {
        printf("greater =%d",x);
    }
    else if(y>z)
    {
        printf("greater =%d",y);
    }
    else
    {
        printf("greater =%d",z);
    }
}
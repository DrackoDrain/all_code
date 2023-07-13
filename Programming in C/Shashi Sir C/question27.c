//Write a program to enter three sides of a traingle and check whether the traingle is equilateral or isoceles or scalence//

#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the three sides of traingle");
    scanf("%d%d%d",&x,&y,&z); 
    if(x==y&&y==z)
    {
     printf("equilateral traingle");
    }
    else if(x==y||y==z||x==z)
    {
        printf("isoceles traingle");
    }
    else if(x!=y&&y!=z&&x!=z)
    {
        printf("SCALENCE TRAINGLE ");
    }

}
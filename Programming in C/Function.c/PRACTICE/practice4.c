// Write a program to find biggest of three integer using functions //

#include<stdio.h>
int a,b,c;
int largest(int a,int b,int c)
{
    printf("ennter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("biggest number is a %d",a);
    }
    if(b>a && b>c)
    {
        printf("biggest number is b %d",b);
    }
    else
    {
        printf("biggest numeber is c %d",c);
    }

}
void main()
{
    largest(a,b,c);
}
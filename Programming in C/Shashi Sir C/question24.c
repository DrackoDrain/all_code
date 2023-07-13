//Write a program to find the area of traingle using heron's formula//
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,s,area;
    printf("enter the three sides of traingle ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of traingle=%d",area);

}
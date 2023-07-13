//Write a program to find quadratic equation formula//
#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,a,b,c;
    printf("enter the cofficient of quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("x1=%f",x1);
    printf("\n x2=%f",x2);
    

}
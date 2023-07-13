#include<stdio.h>
#include<math.h>
void main()
{
    float ci,p,r,t;
    printf("enter the value of p,r and t");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*(pow((1+r/100),t));
    printf("ci=%f",ci);

}
// write a program to find compound intrest and simple intrest while pressing key 1 or 2 respectively.

#include<stdio.h>
#include<math.h>
void main()
{
    float si,ci,p,r,t;
    int ch;
    printf("enter the value of p,r and t");
    scanf("%f%f%f",&p,&r,&t);
    printf("enter the choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        si=(p*r*t)/100;
        printf("simple intrest =%f",si);
        break;
        case 2:
        ci=p*(pow ((1+r/100),t));
        printf("coumpound intrest=%f",ci);
        break;
        default :
        printf("invalid choice");
        }
}
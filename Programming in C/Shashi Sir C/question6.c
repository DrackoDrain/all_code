#include<stdio.h>
void main()
{
    float BS,DA,RA,GS;
    printf("enter the basic salary");
    scanf("%f",&BS);
    DA=BS*0.4;
    RA=BS*0.2;
    GS=BS+DA+RA;
    printf("gross salary=%f",GS);


}
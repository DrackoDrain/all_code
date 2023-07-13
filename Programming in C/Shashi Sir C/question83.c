// Write a program to find simple intrest using pointers //

#include<stdio.h>
void main()
{
    float x,y,z,si;
    float *p,*r,*t;
    p=&x;
    r=&y;
    t=&z;
    printf("enter principle,rate and time");
    scanf("%f%f%f",p,r,t);
    si=(*p**r**t)/100;
    printf("simple intrest=%f",si);
}

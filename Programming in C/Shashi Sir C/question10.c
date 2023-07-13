#include<stdio.h>
void main()
{
    int area_of_rectangle,length,breadth,perimeter_of_rectangle;
    float area_of_circle,radius,circumference,pi=3.14;
    printf("enter the length and breadth of rectangle");
    scanf("%d%d",&length,&breadth);
    perimeter_of_rectangle=2*(length+breadth);
    area_of_rectangle=length*breadth;
    printf("perimeter=%d",perimeter_of_rectangle);
    printf("\n area=%d",area_of_rectangle);
    printf("\n enter the radius of circle");
    scanf("%f",&radius);
    circumference=2*pi*radius;
    area_of_circle=pi*radius*radius;
    printf("\n circumference=%f",circumference);
    printf("\n area of circle=%f",area_of_circle);
}
#include<stdio.h>
void main()
{
    float celcius,fahrenheit;
    printf("enter the temprAture of city in fahrenheit");
    scanf("%f",&fahrenheit);
    celcius=0.56*(fahrenheit-32);
    printf("\n temprature of city in celcius=%f",celcius);


}
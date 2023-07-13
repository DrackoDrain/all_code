#include<stdio.h>
void main()
{
    float kilometers,meters,inches,centimeters,feets;
    printf("enter the distance betweeen two cities in kilometer");
    scanf("%f",&kilometers);
    meters=kilometers*1000;
    printf("\n meters=%f",meters);    
    centimeters=meters*100;
    printf("\n centimeters=%f",centimeters);
    inches=centimeters*2.54;
    printf("\n inches=%f",inches);
    feets=inches*12;
    printf("\n feets=%f",feets);
    


}
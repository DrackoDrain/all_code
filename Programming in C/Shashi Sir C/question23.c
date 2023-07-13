//wrie a program to enter marks of 5 subjects of a student and display pass if average is greater than equal to 33 percent otherwise fail using if-else statement//

#include<stdio.h>
void main()
{
    float phy,chem,bio,eng,math,avg;
    printf("enter five subjects");
    scanf("%f%f%f%f%f",&phy,&bio,&chem,&math,&eng);
    avg=(phy+math+eng+bio+chem)/5;
    if(avg>=33)
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
}

// Write a program to print week days on pressing 1 to 7 respectively//
#include<stdio.h>
void main()
{
    int ch;
    printf("enter the choice between 1 to 7 \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("today is sunday");
        break;
        case 2:
        printf("today is monday");
        break;
        case 3:
        printf("today is tuesday");
        break;
        case 4:
        printf("today is wednesday");
        break;
        case 5:
        printf("today is thrusday");
        break;
        case 6: 
        printf("today is friday");
        break;
        case7:
        printf("today is saturday");
        dafault:
        printf("invalid choice");
    }
}
  
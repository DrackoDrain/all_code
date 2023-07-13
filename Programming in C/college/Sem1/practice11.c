#include<stdio.h>
void main()
{
    int choice;
    printf("\n 1.passed in maths");
    printf("\n 2. passed in science");
    printf("\n  3. passed in  both");
    printf("\n enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("you got 15");
                   break;
        case 2: printf(" you got 15");
                   break;
        case 3: printf(" you got 45");
                   break;
        default: printf(" invalid choice");


    }
}
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z,choice;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    printf("\n 1 for add");
    printf("\n 2 for sub");
    printf("\n 3 for mult");
    printf("\n 4 for div");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        z=x+y;
        break;
        case 2:
        z=x-y;
        break;
        case 3:
        z=x*y;
        break;
        case 4:
        z=x/y;
        break;
        default:
        printf("\n invalid entry");
        break;
    } 
    printf("\n result=%d",z);
}
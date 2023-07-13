#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=3,c=7,small;
    small = (a<b?(a<c?a:c) : (b<c?b:c));
    printf("\n the small no is %d",small);
    getch();
}
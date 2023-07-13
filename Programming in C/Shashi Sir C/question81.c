// Write a program to check the number whether it is odd or even using function (bottom up approach) //

#include<stdio.h>
int i;
void num(int i)
{
    if(i%2==0)
    {
        printf("Given number is even");
    }
    else
    {
        printf("Given number is odd");
    }
}
void main()
{
    printf("Enter any number");
    scanf("%d",&i);
    num(i);

}
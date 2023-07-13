// The program with the function cube and beep along with modifications in main() //

#include<stdio.h>
int cube(int i)
{
    int retval;
    retval=i*i*i;
    return retval;
}
void beep()
{
    printf("\a");
}
void main()
{
    int input;
    printf("the cube of 10 is %d \n",cube(10));
    printf("Input an integer");
    if(scanf("%d",&input)<1)
    {
        beep();
        printf("Input is valid");
    }
    else
    {
        printf("The cube of %d is %d \n",input,cube(input));
    }
}
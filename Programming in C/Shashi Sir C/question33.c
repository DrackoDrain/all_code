 // write a program to print INDIA 10 times using goto statement //
#include<stdio.h>
void main()
{
    int k=1;
    xx : printf("INDIA \n");
    k++;
    if(k<=10)
    {
        goto xx;
        
    }
}
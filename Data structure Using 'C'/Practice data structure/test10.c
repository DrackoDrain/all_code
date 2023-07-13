// fibonacci series

#include<stdio.h>
void main()
{
    int a,b,c,elements,i;
    printf("How many fibonacci elements you want ");
    scanf("%d",&elements);
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("\n Fibonacci numbers are **********");
    printf("\n %d \n %d \n",a,b);
    for(i=0;i<elements;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n %d\n",c);
    }
}
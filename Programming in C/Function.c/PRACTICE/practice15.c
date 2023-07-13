// sum of first and last number //


#include<stdio.h>
void main()
{
    int num,first,last,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    last=num%10;
    do
    {
        num=num/10;

    }while(num>=10);
    first=num;
    sum=first+last;
    printf("sum=%d",sum);
    
}
// Find digit in number //

#include<stdio.h>
void main()
{
    int n,count=0,i;
    printf("Enter a number");
    scanf("%d",&n);
  do{
        n=n/10;
        count++;
    }while(n!=0);
    printf("Number of digits =%d",count);
}
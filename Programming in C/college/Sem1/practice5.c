#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    printf("enter the value of any number ");
    scanf("%d",&i);
    printf("table of %d",i);
    for(j=1;j<=10;j++)
    {
      k=i*j;
      printf("\n %d",k);
    }
}
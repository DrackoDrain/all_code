// Write a program to print prime numbers from limit x and y //

#include<stdio.h>
void main()
{
    int x,y,i,j,c=1;
    printf("enter limit of x to y");
    scanf("%d%d",&x,&y);
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            c=1;
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1)
        {
              printf("\n prime numebrs =%d",i);
        }    
    }
}
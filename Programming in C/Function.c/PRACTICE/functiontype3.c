// Function taking no argument but return a value  //
#include<stdio.h>
int x,y,z;
int sum(void); //fucntion prototype //
void main()
{
    z=sum();
    z=sum();
    z=sum();
}
int sum(void) // fucntion declaration //
{
    printf("entter the value of x and y");
    scanf("%d%d",&x,&y);
    z=x+y;
    printf("sum=%d",z);
    return z;
}
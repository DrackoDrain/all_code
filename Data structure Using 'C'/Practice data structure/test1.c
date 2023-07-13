#include<stdio.h>
int main()
{
   int t;
      int a,b,sum=0;
      printf("Enter the value of t");
   scanf("%d",&t);

   while(t!=0)
   {
    printf("\n Enter the value of a and b");
       scanf("%d%d",&a,&b);
       sum=a+b;

       printf("\n %d",sum); 
       t--;
   }

}
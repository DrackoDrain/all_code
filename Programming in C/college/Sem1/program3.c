#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,ch;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    do
    {
      printf("\n 1. for sum");
      printf("\n 2. for sub");
      printf("\n 3. for mult");
      printf("\n 4. for div");
      printf("\n 5. for exit");
      printf("\n enter your choice");
      scanf("%d",&ch);
      switch (ch)

      {
      case 1:
      c=a+b;
      printf("\n sum=%d",c);
          
          break;
          case 2:
          c=a-b;
          printf("\n sub=%d",c);
          break;
          case 3:
          c=a*b;
          printf("\n mult=%d",c);
          break;
          case 4:
          c=a/b;
          printf("\n div=%d",c);
        
      
      default:
      printf("\n invalid entry");
          break;
      }
    } while (ch!=5);
    
}
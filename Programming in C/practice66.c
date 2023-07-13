// EQUALISE - 851 

#include <stdio.h>
int main(void)
{
    int T;
    int A,B;
    printf("Enter the testcase");
    scanf("%d",&T);
    printf("Enter the value of a and b");
    
    for(int i=0;i<T;i++)
    {
        scanf("%d%d",&A,&B);
      if(A>B)
      {
          while(B<A)
          {
              B=B*2;
          }
          if(A==B)
          {
              printf("\n YES");
          }
          else
          {
              printf("\n NO");
          }
      }
      else if(B>A)
      {
          while(A<B)
          {
              A=A*2;
          }
          if(B==A)
          {
              printf("\n YES");
          }
          else
          {
              printf("\n NO");
          }
      }
      else if(A==B)
      {
          printf("\n YES");
      }
      else
      {
          printf("\n NO");
      }
     
    }
    return 0;
}

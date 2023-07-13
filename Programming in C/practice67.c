// SUBSCRIBE_ 504

#include <stdio.h>
int main(void)
{
    int T,X;
    
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        int N,a;
        scanf("%d %d",&X,&N);
            if(X%6==0)
            {
                a=X/6;
                printf("\n %d",a*N);
            }
            else
            {
                a=X/6;
                printf("\n %d",(a+1)*N);
            }
    }
    return 0;
}
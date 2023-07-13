// Bubble sort 

#include<stdio.h>

void main()
{
    int a[100],i,j,n,flag=0,temp;
    printf("\n ENter the number of elements the array will hold ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Bubble sort");
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
            flag=1;
        }
        if(flag==0)
        {
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
}


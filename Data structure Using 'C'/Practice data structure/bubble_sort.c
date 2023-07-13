//  optimized bubble sort 

#include<stdio.h>
void main()
{
    int i,j,a[100],temp,flag,n;
    printf("ENter the elements that the array will have");
    scanf("%d",&n);
    printf("ENter the elements of an arary ");
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
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf(" \n sorted elements are ************");
    for(j=0;j<n;j++)
    {
        printf("\n %d",a[j]);
    }
}
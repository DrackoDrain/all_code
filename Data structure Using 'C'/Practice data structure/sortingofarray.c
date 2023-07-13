// Write a program to sort in ascending order,10 element of array 

#include<stdio.h>
void main()
{
    int arr[10],temp=0,i,j;
    printf("Enter the elements od array ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n sorted array elements are ");
    for(i=0;i<10;i++)
    {
        printf("\n %d",arr[i]);

    }
}
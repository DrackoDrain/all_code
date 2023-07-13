// Write a program to sort 10 elements of array in decending order 

#include<stdio.h>
void main()
{
    int arr[10],i,j,temp=0;
    printf("Enter the elements of array \n ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n *********************** \n ");
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sorted elements are :");
    for(i=0;i<10;i++)
    {
        printf("\n %d",arr[i]);
    }
}
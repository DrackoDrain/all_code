// linear search in an array 

#include<stdio.h>
void main()
{
    int arr[50],i,item,size;
    printf("Enter the size of an array");
    scanf("%d",&size);
    printf(" \n which item you want to find");
    scanf("%d",&item);
    printf("array elements are ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==item)
        {
            printf("\n found");
            break;
        }
       
    }
    if(i==size)
    {
        printf("\n element is not found ");

    }
}
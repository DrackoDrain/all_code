// Write a program to search item using binary search (descending order)

#include<stdio.h>
void main()
{
    int a[100],i,n,mid,beg,end,element,f=0;
    printf("\n Enter the range of an array");
    scanf("%d",&n);
    printf("\n Enter elements in an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the elemets you want to search");
    scanf("%d",&element);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==element)
        {
            f=1;
            break;
        }
        else if(a[mid]<element)
        {
            beg=mid+1;
        }
        else
        {
            end=mid+1;
        }
    }
    if(f==1)
    {
        printf("\n search is successful and location is %d",mid+1);
    }
    else
    {
        printf("\n search is unsuccessful");
    }
}
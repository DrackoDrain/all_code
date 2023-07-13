/* sorting of an array */
/* in descending order */

#include<stdio.h>
void main()
{
    int a[10],i,j,temp=0;
    printf("enter the elements in array \n ");
     for(i=0;i<=5;i++)
     {
        scanf("%d",&a[i]); 
     }
     for(i=0;i<=5;i++)
     {
        for(j=i+1;j<=5;j++)
        {
            if(a[i]<a[j])            // in if case we can store any array element in temporary variable it doesn't matter //
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
     }
     printf("\n array elements are in descending order");
     for(i=0;i<=5;i++)
     {
        printf("\n %d",a[i]);
     }
}
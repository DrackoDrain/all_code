// Write a program to enter numbers in one file and display the positive and negative number by storing it in another file /

#include<stdio.h>
void main()
{
    FILE *f1,*f2,*f3;
    int num,i;
    printf("contents of file (context.txt) including both positive and negative numbers \n");
    f1=fopen ("number.txt","w");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&num);
        putw(num,f1);
    }
    fclose(f1);
    f1 = fopen("number.txt","r");
    f2 = fopen("positive.txt","w");
    f3 = fopen("negative.txt","w");
    while((num=getw(f1))!=EOF)
    {
        if(num>=0)
        {
            putw(num,f2);
        }
        else if(num<0);
        {
            putw(num,f3);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2=fopen("positive.txt","r");
    f3=fopen("negative.txt","r");
    printf("\n contents of positive.txt FILE \n");
    while((num=getw(f2))!=EOF)
    {
        printf("\n %d",num);
    }
    fclose(f2);
    fclose(f3);
    getch();
}
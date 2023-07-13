// Write a program to store the details of a student in a file //

#include<stdio.h>
void main()
{
    FILE *fp;
    char name[10];
    int roll,marks,i;
    fp=fopen ("college.txt","w");
    printf("enter students details \n");
    for(i=1;i<=3;i++)
    {
        printf("Students name,roll,marks \n");
        fscanf(stdin,"%s%d%d",name,&roll,&marks);
        fprintf(fp,"%s%d%d",name,roll,marks);
    }
    fclose(fp);
    fprintf(stdout,"\n \n");
    fp=fopen("college.txt","r");
    printf("NAME \t ROLL \t MARKS \n");
    for(i=1;i<=3;i++)
    {
        fscanf(fp,"%s \t %d \t %d \t",name,&roll,&marks);
        fprintf(stdout,"%s \t %d \t %d \n ",name,roll,marks);
    }
    fclose(fp);
    getch();
}
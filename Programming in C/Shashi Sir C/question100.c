// Write a program to enter details of ten student and display it (Array used within structure) //


#include<stdio.h>
struct student
{
    int roll[10];
    char name[20][10];
    float marks[10];
};
void main()
{
    int i;
    struct student std;
    for(i=0;i<=9;i++)
    {
        printf("Enter the roll name and marks of student");
        scanf("%d%s%f",&std.roll[i],&std.name[i],&std.marks[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("Name=%s \n",std.name[i]);
        printf("Roll=%d\n ",std.roll[i]);
        printf("marks=%f\n ",std.marks[i]);
    }

}
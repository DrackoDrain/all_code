// Write a program to enter details of a student and display it //

#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
void main()
{
    struct student std;
    printf("enter name,roll and marks of student ");
    scanf("%s%d%f",std.name,&std.roll,&std.marks);
    printf("Name=%s \n ",std.name);
    printf("Roll=%d \n",std.roll);
    printf("marks=%f \n",std.marks);
}

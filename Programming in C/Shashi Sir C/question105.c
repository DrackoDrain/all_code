// Write a program to enter details of a student and display it using Union //

#include<stdio.h>
union student
{
    int roll;
    char name[20];
    float marks;
};
void main()
{
    union student u;
    printf("Enter the roll,name and marks of students");
    scanf("%d%s%f",&u.roll,&u.name,&u.marks);
    printf("*************STUDENT DETAILS***************\n ");
    printf("Name=%s\n",u.name);
    printf("roll=%d\n",u.roll);
    printf("marks=%f\n",u.marks);
}
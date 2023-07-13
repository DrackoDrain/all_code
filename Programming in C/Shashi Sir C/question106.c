// Write a program to enter details of 10 students (array with union) //

#include<stdio.h>
union student
{
    int roll[3];
    char name[20][3];
    float marks[3];
};
void main()
{
    int i;
    union student u;
    for(i=0;i<=9;i++)
    {
        printf("enter roll,marks and name of student");
        scanf("%d%f%s",&u.roll[i],&u.marks[i],&u.name[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("roll=%d\n",u.roll[i]);
        printf("marks=%d\n",u.marks[i]);
        printf("name=%s\n",u.name[i]);

    }
}
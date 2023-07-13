// Write a program to enter details of 10 students using union only //
// array of union object //

#include<stdio.h>
union student
{
    int roll;
    char name[20];
    float marks;
};
void main()
{
    int i;
    union student u[5];
    for(i=0;i<=9;i++)
    {
        printf("enter the roll,name and marks ");
        scanf("%d%s%f",&u[i].roll,&u[i].name,&u[i].marks);
    }
    printf("********STUDENT DETAILS********\n");
    for(i=0;i<=9;i++)
    {
        printf("roll=%d\n",u[i].roll);
        printf("name=%s\n",u[i].name);
        printf("marks=%f\n",u[i].marks);

    }

}
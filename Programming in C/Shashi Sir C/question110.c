// Write a program to display details of student and teachers //


#include<stdio.h>
struct student 
{
    char name[20];
    int roll;
    float marks;
};
struct teacher
{
    char name[20];
    int code;
    float exp;
};
void main()
{
    struct student std;
    struct teacher tea;
    printf("enter the name of students,roll and marks");
    scanf("%s%d%f",&std.name,&std.roll,&std.marks);
    printf("\n Students Details *************************************");
    printf("Student name=%s\n ",std.name);
    printf("roll=%d\n ",std.roll);
    printf("marks=%f\n ",std.marks);
    printf("\n **********************************************");
    printf("Enter Teachers name,code,exp");
    scanf("%s%d%f",&tea.name,&tea.code,&tea.exp);
    printf("Teacher Details *****************\n ");
    printf("Name=%s \n",tea.name);
    printf("code=%d \n",tea.code);
    printf("exp=%f \n",tea.exp);
}

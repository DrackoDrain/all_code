// Write a program to pass structure to function //

#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;

};
void display(struct student std);
void main()
{
    struct student std;
    printf("enter roll,name,marks");
    scanf("%d%s%f",&std.roll,&std.name,&std.marks);
    display(std);

}
void display(struct student std)
{
    printf("roll=%d\n",std.roll);
    printf("name=%s\n",std.name);
    printf("marks=%f",std.marks);
}
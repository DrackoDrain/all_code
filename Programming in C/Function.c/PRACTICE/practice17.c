// Passing structure to function //

#include<stdio.h>
struct student 
{
    
    char name[30];
    int roll;
    float marks;
};
void display(struct student std);
void main()
{
    struct student std;
    printf("Enter name,roll,marks");
    scanf("%s%d%f",&std.name,&std.roll,&std.marks);
    display(std);
}
void display(struct student std)
{
    printf("Name=%s",std.name);
    printf("Roll=%d",std.roll);
    printf("marks=%f",std.marks);

}
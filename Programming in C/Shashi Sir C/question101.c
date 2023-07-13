// Write a program to enter details of ten students using structure only //

#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;

};
void main()
{
    int i;
    struct student std[5];
    for(i=0;i<=4;i++)
    {
        printf("enter the name,roll and marks of student");
        scanf("%s%d%f",&std[i].name,&std[i].roll,&std[i].marks);
    }
  
    for(i=0;i<=4;i++)
    {
        printf("Name =%s \n",std[i].name);
        printf("roll=%d \n",std[i].roll);
        printf("Marks=%f \n",std[i].marks);
    }
}

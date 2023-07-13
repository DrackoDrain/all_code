// Write a program to read and display information of a student using a structure within a structure //
// NESTED STRUCTURE //


#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float fees;
        struct dob
        {
            int dd,mm,yyyy;
        }dt;
}st;
void main()
{
    printf("enter name of student,roll,fees");
    scanf("%s%d%f",&st.name,&st.roll,&st.fees);
    printf("Enter date of birth \n ");
    scanf("%d%d%d",&st.dt.dd,&st.dt.mm,&st.dt.yyyy);
    printf(" \n *************STUDENTS DETAILS ************** \n");
    printf("students name=%s \n",st.name);
    printf("students roll=%d \n",st.roll);
    printf("students fees=%f \n ",st.fees);
    printf("date of birth=%d-%d-%d",st.dt.dd,st.dt.mm,st.dt.yyyy);
}
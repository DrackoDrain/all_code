// delete a node at any specified position in the linked list 


#include<stdio.h>
#include<stdlib.h>
void delete_any(void);
int choice,count=0,position;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *newnode,*temp,*ptr,*preptr,*xyz;
void create(void)
{
    do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements you want to insert");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode; 
    }
    count++;
    printf("press -1 to exit");
    scanf("%d",&choice);
    }while(choice!=-1);
}
void show(void)
{
    printf("\n count =%d",count);
    temp=head;
    while(temp!=NULL)
    {
        printf(" \n%d",temp->data);
        temp=temp->next;
    }
}
void main()
{
    create();
    show();
    delete_any();
    show();
}
void delete_any(void)
{
    int i=1;
    printf(" \nEnter the position you want to delete ");
    scanf("%d",&position);
    ptr=head;
    if(position>count)
    {
        printf("\n INvalid position");
    }
    else
    {
        while(i<position)
        {
            preptr=ptr;
            ptr=ptr->next;
            i++;
        }
        xyz=ptr;
        preptr->next=ptr->next;
        free(xyz);
    }

}
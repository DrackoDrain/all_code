// Write a program to insert a node at any specified location in the given linked list 

#include<stdio.h>
#include<stdlib.h>
int choice,count=0;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *newnode,*temp;
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
void insert_any(void)
{
    int position,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf(" \n Enter the position you want to insert");
    scanf("%d",&position);
    if(position>count)
    {
        printf("Invalid position \n");
    }
    else
    {
        temp=head;
        while(i<position-1)
        {
            temp=temp->next;
            i++;
        }
        printf("Enter the node you want to insert");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    }
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
    insert_any();
    show();

}
// Write a program to insert a node at the last of the linked list 

#include<stdio.h>
#include<stdlib.h>
int choice;
void create(void);
void show(void);
void insert_last(void);
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *newnode,*temp;
void main()
{
    create();
    show();
    insert_last();
    show();
}

void create(void)
{
    do
    {
     newnode=(struct node*)malloc(sizeof(struct node));
     printf("\n Enter the node in linked list");
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
       printf("\n Enter -1 to exit");
       scanf("%d",&choice);
    }while(choice!=-1);
}
void show(void)
{
    temp=head;
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
    }
}
void insert_last(void)
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the new node you want to insert");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=newnode;
}
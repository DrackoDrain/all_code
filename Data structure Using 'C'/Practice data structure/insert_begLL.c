// write a program to insert a node at the begining of the linked list 

#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void insert_beg(void);
int choice;
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
    insert_beg();
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
void insert_beg(void)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n ENter the elements in new node");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}

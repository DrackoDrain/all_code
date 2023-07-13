// Write a program to insert a node at any position in the given linked list 


#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void insert_any(void);
int  choice,count=0;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *newnode,*temp,*ptr;
void main()
{
    create();
    show();
    insert_any();
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
       count++;
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
void insert_any(void)
{
    int position,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the position you want to insert");
    scanf("%d",&position);
    temp=head;
    if(position>count)
    {
        printf("\n Invalid position");
    }
    else
    {
        printf("\n Enter the new node you want to insert");
        scanf("%d",&newnode->data);
        while(i<position)
        {
            ptr=temp;
            temp=temp->next;
            i++;
        }
        newnode->next=temp;
        ptr->next=newnode;
    }
}
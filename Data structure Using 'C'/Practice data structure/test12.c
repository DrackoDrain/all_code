// delete a node at the begining of the linked list 

#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void delete_beg(void);
int choice;
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
    delete_beg();
    show();
}
void create(void)
{
    do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENter the new node");
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
    printf("\n press -1 to exit or any key to continue");
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

void delete_beg(void)
{
    printf("\n deleted elements *********************");
    ptr=head;
    head=head->next;
    free(ptr);
   
}
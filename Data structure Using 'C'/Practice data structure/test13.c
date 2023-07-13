// delete a node at the last of the linked list and after a given position 

#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void delete_last(void);
void delete_after(void);
int choice;
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node *newnode,*temp,*ptr,*preptr,*value;
void main()
{
    create();
    show();
    delete_last();
    show();
    delete_after();
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
void delete_last(void)
{
    if(head==NULL)
    {
        printf("Invalid position ");
        exit(0);
    }
    else{
         printf("\n DELETED ELEMENTS ***********\n ");
        ptr=head;
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        free(ptr);
    }
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
void delete_after(void)
{
    int num;
    printf("ENter the node whose nextnode you want to delete \n");
    scanf("%d",&num);
    ptr=head;
    preptr=ptr;
    while(preptr->data!=num)
    {
         preptr=ptr;
        ptr=ptr->next;
    }
    value=ptr;
    preptr->next=ptr->next;
    free(value);
}

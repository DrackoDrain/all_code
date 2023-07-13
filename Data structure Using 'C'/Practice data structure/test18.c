// implementation of linked list 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head = NULL;
 
struct node *newnode,*temp;

void create(void)
{
    int choice;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the element you want to insert in newnode");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("\n press -1 for exit");
        scanf("%d",&choice);
    }while(choice!=-1);   
}
void show()
{
    int i;
    temp=head;
    while(temp!=NULL)
    {
        printf("\n data= %d",temp->data);
        temp=temp->next;
        i++;
    }
}

void main()
{
    create();
    show();
}

// implementation of the linked list 

#include<stdio.h>
#include<stdlib.h>

void create(void);
void show(void);
  struct node
    {
        int data;
        struct node *next;
    };

    struct node *head,*newnode,*temp;
int ch;
void main()
{
    create();
    show();
}
void create(void)
{
    
    do
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the data you want to insert");
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
     printf("enter -1 to exit otherwise press any other key");
    scanf("%d",&ch);
  
    }
    while(ch!=-1);
}

void show(void)
{      
    temp=head;
        while(temp!=NULL)
        {
            printf(" \n %d",temp->data);
            temp=temp->next;

        }
}

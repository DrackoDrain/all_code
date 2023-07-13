// insert a node at the begining,at the last, at any specified location in the linked list 
// not solved 
// solved


#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void insert_beg(void);
void insert_last(void);
void insert_any(void);

    struct node{

        int data;
        struct node *next;
    }*head=NULL;
   
    struct node *newnode,*temp,ptr;

    void main()
    {
        create();
        show();
        insert_beg();
        show();
        insert_last();
        show();
        insert_any();
        show();
    }
    void create(void)
    {
        int choice;
        do
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("\n Enter the elements in node ");
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
            printf("press -1 for exit");
            scanf("%d",&choice);
        } while(choice!=-1);  
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
        printf("\n Enter the elements is node you want to insert in the begining");
        scanf("%d",&newnode->data);
        newnode->next=head;
        head=newnode;
     }
     void insert_last(void)
     {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the elements in node you want to insert at the last");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
     }
        void insert_any(void)
        {
            struct node *ptr;

        int position,i=1;
        printf("Enter the location you want to insert node");
        scanf("%d",&position);
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n enter the newnnode you want to insert");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(i<position)
        {
            ptr=temp;
            temp=temp->next;
            i++;

        }
            newnode->next=temp;
            ptr->next=newnode;
    }
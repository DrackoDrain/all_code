// implementation of linked list 
// not solved 
// solved 

#include<stdio.h>
#include<stdlib.h>
    struct node{

        int data;
        struct node *next;
    }*head=NULL;
    
    struct node *newnode,*temp;

    void main()
{

    
    int choice;
    do
    {
        newnode=(struct node*)malloc(1*sizeof(struct node));
        printf("Enter the data");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to continue (0,1)?");
        scanf("%d",&choice);
    }while(choice!=1);
   temp=head;
    while(temp!=NULL)
    {
        printf("\n %d",temp->data);
        temp=temp->next;
    }
}
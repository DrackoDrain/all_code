// insertion a node in the beginning of a linked list 

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create(void);
void show(void);
void insert_beg(void);
struct node
{
    int data;
    struct node *next;
  
}*start=NULL;
  struct node *new_node,*current,*save;
int ch;
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
        new_node=(struct node*)malloc(1*sizeof(struct node));
        if(new_node==NULL)
        {
            printf("Overflow");
            exit(0);
        }
        else if(start==NULL)
        {
            printf("Enter the elements in node");
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            start=new_node;
            current=new_node;
        }
        else
        {
            printf("Enter elements in node");
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            current->next=new_node;
            current=new_node;

        }
        printf("pres-1 to exit");
        scanf("%d",&ch);

    }while(ch!=-1);
}
void show(void)
{
        save=start;
        while(save!=NULL)
        {
                printf(" \n %d",save->data);
            save=save->next;
        }
}
void insert_beg(void)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    if(new_node==NULL)
    {
        printf("overflow");
        exit(0);
    }
    else
    {
        printf("Enter the elements in node that you want to insert at the begining");
        scanf("%d",&new_node->data);       
        new_node->next=start;
        start=new_node;
    }
}
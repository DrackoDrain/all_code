// insertion of a node at end of linked list 
// not clear

#include<stdio.h>
#include<stdlib.h>
void create(void);
void show(void);
void insert_end(void);
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
    insert_end();
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
void insert_end(void)
{

    new_node=(struct node*)malloc(sizeof(struct node));
    if(new_node==NULL)
    {
        printf("Overflow ");
        exit(0);
    }
    else{
        printf("Enter the element in node");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        current->next=new_node;
        current=new_node;
    }
}

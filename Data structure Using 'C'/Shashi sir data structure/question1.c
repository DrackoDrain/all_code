// Implementation linked list 

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
struct node *current,*save,*new_node;
void main()
{
    int ch;
    do
    {
        new_node=(struct node*)malloc(1*sizeof(struct node));
        if(new_node==NULL)
        {
            printf("Can't able to create node");
            exit(0);
        }
        else if(start==NULL)
        {
            printf("Enter the element in 1st node");
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            start=new_node;
            current=new_node;
        }
        else{
            printf("Enter the element in node");
            scanf("%d",&new_node->data);
            new_node->next=NULL;
            current->next=new_node;
            current=new_node;
        }
        printf("Enter -1 to exit from the linked list ");
        scanf("%d",&ch);
    }while(ch!=-1);
    save=start;
    while(save!=NULL)
    {
        printf("\n %d  ",save->data);
        save=save->next;
    }  
}
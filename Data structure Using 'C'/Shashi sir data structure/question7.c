// Delete a node at the last of a linked list //

#include<stdio.h>
#include<malloc.h>

void create(void);
void show(void);
void delete_last(void);


    struct node{
        int data;
        struct node *next;
    }*start=NULL;
    struct node *new_node,*current,*save;
    int ch;
    void main()
    {
        create();
        
        delete_last();
        show();
    }
    void create(void)
    {
        do
        {
            new_node=(struct node*)malloc(sizeof(struct node));
            if(new_node==NULL)
            {
                printf("Overflow");
                exit(0);
            }
            else if(start==NULL)
            {
                printf("enter the elements in node");
                scanf("%d",&new_node->data);
                new_node->next=NULL;
                start=new_node;
                current=new_node;
            }
            else
            {
                printf("Enter the elements in node");
                scanf("%d",&new_node->data);
                new_node->next=NULL;
                current->next=new_node;
                current=new_node;
            }
            printf("pres -1 to exit \n");
            scanf("%d",&ch);
        } while (ch!=-1);
        
    }
    void show(void)
    {
        save=start;
        while(save!=NULL)
        {
            printf("\n %d",save->data);
            save=save->next;
        }
    }
    void delete_last(void)
    {
        struct node *temp,*ptr;
       if(start==NULL)
       {
        printf("\n List is empty");
       }
       else if(start->next==NULL)
       {
        start=NULL;
        free(start);
       }
       else
       {
        ptr=start;
        while(ptr->next!=NULL)
        {
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        free(ptr);
       }
       
    }
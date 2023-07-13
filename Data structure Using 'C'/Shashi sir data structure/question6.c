// Delete a node at the beginning of a linked list //

#include<stdio.h>
#include<malloc.h>

void create(void);
void show(void);
void delete_beg(void);


    struct node{
        int data;
        struct node *next;
    }*start=NULL;
    struct node *new_node,*current,*save;
    int ch;
    void main()
    {
        create();
        
        delete_beg();
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
    void delete_beg(void)
    {   
        struct node *ptr;
        if(start==NULL)
        {
            printf("List is empty");
        }
        else
        {
            ptr=start;
            start=ptr->next;
            free(ptr);
            printf("\n deleted elements");
        }
       
    }


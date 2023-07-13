#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;
void creation(int n)
{
    int c = 1;
    printf("enter data\n");
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\n[%d]=", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            c++;
            head = temp = newnode;
        }
        if (c == 2)
        {
            temp->next = newnode;
            temp = newnode;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            if (temp->next == NULL)
            {
                temp->next = newnode;
                temp = newnode;
            }
        }
    }
}
void sort_delete(int num)
{
    temp = head;
    struct node *prevnode, *nnode;
    while (temp->data != num)
    {
        prevnode = temp;

        temp = temp->next;
        nnode = temp;
    }
    if (head == temp)
    {
        prevnode = head;
        head = head->next;
        free(prevnode);
    }
    else
    {
        prevnode->next = temp->next;
        free(nnode);
    }
    temp = newnode;
}
void sortlist()
{
    temp = head;
    struct node *num2;
    int tempval;
    while (temp->next != NULL)
    {
        num2 = temp->next;
        while (num2->next != NULL)
        {
            if (temp->data > num2->data)
            {
                tempval = temp->data;
                temp->data = num2->data;
                num2->data = tempval;
            }
            num2 = num2->next;
        }
        temp = temp->next;
    }
    if (temp->data > num2->data)
    {
        tempval = temp->data;
        temp->data = num2->data;
        num2->data = tempval;
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf("data=%d\n", temp->data);
        temp = temp->next;
    }
}
void main()
{
    int head = 0, val, val1, option, pos, s, num, n;
    do
    {
        printf("\n********************\n");
        printf("1.creation\n");
        printf("2.delete in shorted node\n");
        printf("3.sort the list\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("enter your choice\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("enter no of data you wamt in linked list\n");
            scanf("%d", &n);
            creation(n);
            break;
        case 2:
            printf("enter number to be deleted \n");
            scanf("%d", &num);
            sort_delete(num);
            break;
        case 3:
            sortlist();
            break;
        case 4:
            printf("\nFinal data\n");
            display();
            break;
        }
    } while (option != 5);
}
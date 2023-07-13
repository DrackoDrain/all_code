// push,pop operation in stack 
// not solved
// solved 
// time complexity order of one.

#include<stdio.h>
#include<stdlib.h>

#define size 3
void push(void);
void display(void);
void pop(void);
void peek(void);
int item,top=-1,s[size]; 
void main()
{
    int ch;
    int n;
   do
   {
    printf("\n 1- PUSh");
    printf("\n 2- DISPLAY");
    printf("\n 3- POP");
    printf("\n 4- PEEK");
    printf("\n Enter your choice ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: 
        push();
        break;
        case 2:
        display();
        break;
        case 3:
        pop();
        break;
        case 4:
        peek();
        break;
        default: printf("\n Invalid choice");
    }
     printf(" \n press 0 for exit \n otherwise click any other key ");
     scanf("%d",&n);
   }while(n!= 0);
   display();

}

    void push()
    {
        if(top==size-1)
        {
            printf("\n overFLOW");
            display();
            exit(0);
        }
        else
        {
            top=top+1;
            printf("\n Enter the element you want to insert");
            scanf("%d",&item);
            s[top]=item;
            printf("\n %d is inserted",item);
        }

    }
    void display()
    {
        int i;
        if(top==-1)
        {
            printf("\n STACK is empty");
            exit(0);
        }
        else
        {
            printf("\n Elements are below");
        for(i=top;i>=0;i--)
        {
            printf("\n %d",s[i]);
        }
        }
    }
    void pop()
    {
        int item;
        if(top==-1)
        {
            printf("\n Underflow");  
            exit(0);
        }
        else
        {
            item=s[top];
            top--;
            printf("\n %d is deleted",item);
           
        }
    }
    void peek()
    {
        if(top==-1)
        {
            printf("\n UNDERFLOW");
            exit(0);
        }
        else
        {
            printf("\n %d",s[top]);
        }
    }

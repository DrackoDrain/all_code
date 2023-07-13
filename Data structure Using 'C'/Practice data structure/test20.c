// Write a program to implement queue operations using array 

#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear == N-1)
    {
        printf("\n Overflow ");
    }
    else if(front == -1 && rear == -1 )
    {
        front = rear = 0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue(int x)
{
    if(front == -1 && rear == -1 )
    {
        printf("\n There is nothing in the queue");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front ++;
    }
}

void display()
{
    if(front == -1 && rear == -1)
    {
       printf("\n The queue is empty ");
    }
    else
    {
        for(int i=front; i < rear+1; i++ )
        {
            printf("\n %d",queue[i]);
        }
    }
}

void main()
{
    enqueue(15);
    enqueue(16);
    enqueue(17);
    display();
    dequeue(15);
    printf("\n real numbers are ");
    display();
}
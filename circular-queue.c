/*Write a menu driven C program to implement Circular queue by using array with following operations  
1. Insertion  2.Deletion  3. Display.
*/

#include <stdio.h>
#define MAX 5
int queuearr[MAX];
int front =  - 1;
int rear =  - 1;


void insert(int item)
{
    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
        printf("Queue is Overflow!");
        return;
    }
    if (front ==  - 1)
    {
        front=0;
    }
    if (rear == MAX - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queuearr[rear] = item;
}

void delete()
{
    if (front ==  - 1)
    {
        printf("Queue is Underflow!");
        return ;
    }
    printf("Element deleted from queue: %d",queuearr[front]);
    if (front == rear)
    {
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        if(front == MAX -1)
            front = 0;
        else
        front= front +1;
    }
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is Empty:");
        return;
    }
    printf("\nQueue Elements:\t");
    if(front<=rear)
    while(front<=rear)
    {
        printf("%d ",queuearr[front]);
        front++;
    }
        else
        {
            while(front <= MAX-1)
            {
            printf("%d ",queuearr[front]);
            front++;
            }
            front = 0;
            while(front <= rear)
            {
            printf("%d ",queuearr[front]);
            front++;
            }
        }
}

int main()
{
    int item, ch;
    int queuearr[MAX];
    do
    {
        printf("\t\tCircular Queue:\n");
        printf("\n1.Insert\n");
        printf("\n2.Delete\n");
        printf("\n3.Display\n");
        printf("\n4.Exit\n");
        printf("\nEnter your choice : \n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number: \n");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
                default:
                printf("Wrong Choice!!\n");
        }
    }while (ch != 4);
    return 0;
}

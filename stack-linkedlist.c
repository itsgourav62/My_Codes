// Write a C program to implement Stack using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;


void push(int data);
void pop();
void display();


int count = 0;

void main()
{
    int n, ch;
    printf("\nStack Implementation using Linked List:");
    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Dipslay");
    printf("\n 4 - Exit");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data in the node : ");
            scanf("%d", &n);
            push(n);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        
        default :
            printf(" Wrong choice!! ");
            break;
        }
    }
}

void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
    printf("\nData inserted in stack!!\n")
}

void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error!! Empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Value popped is  : %d", top->info);
    free(top);
    top = top1;
    count--;
}

void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("|%d|--> ", top1->info);
        top1 = top1->ptr;
    }
}

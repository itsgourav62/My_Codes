/*Q--> Write a menu driven C program to implement Double-ended queue
by using array with following operations
1. Insertion
2. Deletion
3. Display.
*/

# include<stdio.h>
# include<stdlib.h>
# define max 5
int deque[max];
int front=-1,rear=-1;

void insertfront();
void insertrear();
void deletefront();
void deleterear();
void display();

void main() 
{
    int ch;
    do
    {
        printf("\n\t Menu Driven Program::");
        printf("\n 1.Insert from Front:\n");
        printf("\n 2.Insert from Rear:\n");
        printf("\n 3.Delete from Front:\n");
        printf("\n 4.Delete from Rear:\n");
        printf("\n 5.Display\n");
        printf("\n 6.Quit\n");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            insertfront();
            break;

            case 2:
            insertrear();
            break;

            case 3:
            deletefront();
            break;

            case 4:
            deleterear();
            break;

            case 5:
            display();
            break;

            case 6:
            break; 
            default:
            printf("\nWrong Choice!!\n :/");
            break;
        }
    }while(ch!=6);
}

void insertfront(int item)
{
    if(front==0)
        {
            printf("\nDequeue Overflow!!\n");
        }
    else
    front=front-1;
    printf("\nEnter the number:\n");
    scanf("%d",&item);
    deque[front]=item;
}

void insertrear(int item)
{
    if(rear==max)
        {
            printf("\nDequeue Overflow!!\n");
        }
    else
    rear=rear+1;
    printf("\nEnter the element for adding in dequeue : \n");
    scanf("%d",&item);
    deque[rear]=item;
}

void deletefront(int item)
{
    if(front==max)
    {
        printf("\nDequeue Underflow\n");
    }
    else
    item=deque[front];
    front=front+1;
    printf("\nElement deleted from dequeue is %d",item);
}

void deleterear(int item)
{
    if(rear==0)
        {
            printf("\nDequeue Underflow\n");
        }
    else
    item=deque[rear];
    rear=rear-1;
    printf("\nElement deleted from dequeue is %d",item);
}

void display()
{
    printf("\nThe Dequeue Elements :\n");
    for(int i=front;i<=rear;i++)
        {
            printf("%d \t ", deque[i]);
            printf("\n");
        }
}



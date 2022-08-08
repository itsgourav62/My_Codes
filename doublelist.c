/*Write a menu driven C program to implement doubly linked list with following operations
1. Create
2. Traversal (both data and address)
3. Search (with address)
*/

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * prev;
    struct node * next;
}*head;

void createList(int item);
void display();
void search();

void main()
{
    int item, choice;

    do
    {
        printf("\n1.Create\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
                printf("\nEnter the number of node : ");
                scanf("\n%d", &item);
                createList(item);
            break;
        case 2:
                display();
            break;

        case 3:
                search();
            break;
        
        case 4:
                exit(0);
            break;

        default:
            printf("\nTry Again\n");
        }
    } while (choice!=4);
    
}

void createList(int item)
{  
    
    struct node *ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        
        
    if(head==NULL)  
    {  
        ptr->next = NULL;  
        ptr->prev=NULL;  
        ptr->data=item;  
        head=ptr;  
    }  
    else   
    {  
        ptr->data=item;  
        ptr->prev=NULL;  
        ptr->next = head;  
        head->prev=ptr;  
        head=ptr;  
    }  
    printf("\nNode Inserted\n");  
    printf("\n Address of Node inserted:%p",ptr);
    }  
}  

void display()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);
            printf("Address is %p \n",temp);
            n++;
            temp = temp->next;
        }
    }
}

void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nItem found at location %d ",i+1);
                printf("\nAddress at which it was found: %p",ptr);
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
}
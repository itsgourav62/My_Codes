#include<stdlib.h>
#include <stdio.h>

void create();
void display();
void search();
void traversal();


struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;

void main()     
{
        int choice;
        do
        {       
            printf("\n \t ***MENU DRIVEN***");
            printf("\n1.Create ");
            printf("\n2.Display ");
            printf("\n3.Search");
            printf("\n4.Traversal");
            printf("\n5.Exit");
            printf("\nEnter your choice:");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:
                    create();
                    break;

                    case 2:
                    display();
                    break;

                    case 3:
                    search();
                    break;

                    case 4:
                    traversal();
                    break;

                    case 5:
                    exit(0);
                    break;

                    default:
                    printf("Wrong Choice");
                }
        }while (choice!=5);
}

void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("No Memory Space:");
                exit(0);
        }
        printf("Enter the data value for the node:");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}

void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("List is empty:");
                return;
        }
        else
        {
                ptr=start;
                printf("The List of elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\n",ptr->info );
                        ptr=ptr->next ;
                }
        }
}

void search()  
{  
    struct node *ptr;  
    int n, i=0,flag;  
    ptr=start ;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&n);  
        while (ptr!=NULL)  
        {  
            if(ptr->info == n)  
            {  
                printf("Item found at location %d ",i+1);  
                flag=0;  
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
            printf("Item not found\n");  
        }  
    }     

} 


void traversal()
{
    struct node *ptr;

    if(start == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    ptr = start;
    printf("List of Elements are :\n");
    while(start != NULL)
    {
        printf("%d\n", ptr->info); 
        ptr = ptr->next;                
    }
}   

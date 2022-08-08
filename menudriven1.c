#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void main()
{
        int stack[MAX];
        int top = -1;
        int a[10], len=0,  item,n;
        char choice;
        do
        {
                printf("\n1.Create\n");
                printf("\n2.Push\n");
                printf("\n3.Pop\n");
                printf("\n4.Traverse\n");
                printf("\n5.Display\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                { 
                case 1:
                {//creation
                    int i;
                    printf("Enter size of array :");
                    scanf("%d",&n);
                    printf("Enter elements in array :");
                    for(int i=0;i<n;i++)
                    scanf("%d",&a[i]);
                    printf("Enter the elements in array :");
                    for(int i=0;i<n;i++)
                    {
                        printf("%d ",a[i]);
                    }
                    break;
                }
                 case 2 :
                 {//push
                        int val;
                        if(top==MAX-1)
                        {
                        printf("\nStack is full!!");
                        }
                        else
                        {
                        printf("\nEnter element to push:");
                        scanf("%d",&val);
                        top=top+1;
                        stack[top]=val;
                        }
                        break;
                 }
                 case 3:
                 {//pop
                        if(top==-1)
                        {
                        printf("\nStack is empty!!");
                        }
                        else
                        {
                        printf("\nDeleted element is %d",stack[top]);
                        top=top-1;
                        }
                        break;
                 }
                 case 4:
                {//traverse
                    printf("\nTotal number of Elements are : %d",len);
                    printf("\nElements are : ");
                    for(int i=0; i<len; i++)
                    {
                        printf("\t%d",stack[i]);
                    }
                        break;
                }
                case 5:
                {
                    int i;
                    if(top==-1)
                    {
                        printf("\nStack is empty!!");
                    }
                else
                {
                    printf("\nStack is...\n");
                    for(i=top;i>=0;--i)
                    printf("%d\n",stack[i]);
                }
                }
                 default:
                        printf("\nWrong choice\n");
                }
                printf("\n Do you want to continue? (Press y/n)");
                scanf(" %c",&choice);
                }while(choice=='y');
}/*End of switch*/
        
        /*End of while*/

        

/*End of main()*/



/*void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}*/

/*int pop()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}*/

/*void traverse( int a[], int len)
{
    printf("\nTotal number of Elements are : %d",len);
    printf("\nElements are : ");
    for(int i=0; i<len; i++)
    {
        printf("\t%d",a[i]);
    }
}*/







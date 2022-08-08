#include<stdio.h>
void main()
{
int ch,n;
int a[100];
char choice;
do{
printf("\nPress 1 to Create array");
printf("\nPress 2 to Insert element");
printf("\nPress 3 to Sort the Array");
printf("\nPress 4 to Search element in the Array");
printf("\nPress 5 to Merge Array");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{//creation
int i;
printf("Enter size of array :");
scanf("%d",&n);
printf("Enter elements in array :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the elements in array :");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
break;
}
case 2:
{//insertion
    int p,e,k=0,i;
    int na[100];
    printf("Enter pos element to be inserted : ");
    scanf("%d",&p);
    printf("Enter element to be inserted : ");
    scanf("%d",&e);
    for(i=0;i<=n;i++)
    {
        if(i==(p-1))
        {
        na[i]=e;
        }
        else
        {
        na[i]=a[k];
        k++;
        }
    }
    for(i=0;i<=n;i++)
    printf("%d ",na[i]);
	break;
}
case 3:
{//sorting
    int array[100];
    int i,j,t;
    for(i=0;i<n;i++)
    array[i]=a[i];
    for (i=0;i<(n - 1);i++)
    {
    for (j=0;j<(n - i - 1);j++)
    {
    if (array[j]>array[j+1])
    {
    t=array[j];
    array[j]=array[j+1];
    array[j+1] =t;
    }
    }
    }
   printf("Sorted list in ascending order:\n");
   for (i=0;i<n;i++)
   printf("%d\n", array[i]);
   break;
}
case 4:
{//searching
int n1,i,flag=0;
printf("Enter element to be searched :");
scanf("%d",&n1);
for(i=0;i<n;i++)
{
    if(a[i]==n1)
    flag=1;
}
if(flag==1)
printf("ELEMENT FOUND");
else
printf("ELEMENT NOT FOUND");
break;
}
case 5:
{//merging
int n1,p,i;
int a1[100];
int a2[100];
printf("Enter size of second array :");
scanf("%d",&n1);
printf("Enter elements in second array :");
for(i=0;i<n1;i++)
scanf("%d",&a1[i]);
p=n1+n;
for(i=0;i<n;i++)
a2[i]=a[i];
for(i=0;i<n1;i++)
a2[n+i]=a1[i];
printf("MERGED ARRAY :");
for(i=0;i<p;i++)
printf("%d ",a2[i]);
break;
}
default:printf("Wrong choice!");
}
printf("\n Do you want to continue? (Press y/n)");
scanf(" %c",&choice);
}while(choice=='y');
}

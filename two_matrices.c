
#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], b[10][10];
 	int add[10][10];
  
 	printf("\nEnter Number of rows and columns:\n");
 	scanf("%d %d", &i, &j);
 
 	printf("\nEnter the First Matrix Elements:\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
         printf("\n");
  	}
   
 	printf("\nEnter the Second Matrix Elements:\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
        printf("\n");
  	}
  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		add[rows][columns] = a[rows][columns] + b[rows][columns];    
   	 	}
  	}
 
 	printf("\nThe Sum of Two Matrix:\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", add[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}
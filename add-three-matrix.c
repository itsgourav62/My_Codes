#include<stdio.h>

void elements(int matrix[10][10],int row,int col)
{
    int i,j;
    printf("Enter the elements:\n");
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
        {
        printf("Enter a%d%d: ", i , j );
        scanf("%d",&matrix[i][j]);
        }
    }
}

void addition(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
    m3[i][j] =  (m1[i][j] + m2[i][j]);
    }
    }
}

void display(int m[10][10],int row,int col)
{
    int i,j;
    printf("\nAddition of two Matrices is:\n");
    for(i=1;i<=row;i++)
        {
        for(j=1;j<=col;j++)
        {
            printf("%d ",m[i][j]);
         }
        printf("\n");
        }
}

int main()
{
    int m1[10][10],m2[10][10],m3[10][10],row,col;

    printf("Enter number of rows and columns for the matix :");
    scanf("%d %d",&row, &col);
    
    elements(m1,row,col);
    elements(m2,row,col);
    addition(m1,m2,m3,row,col);
    display(m3,row,col);
    return 0;
}

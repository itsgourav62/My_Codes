
#include <stdio.h>
#define SIZE 100

int sum(int a[], int j, int len) 
{
    
    if(j >= len)
        return 0;
        
    return (a[j] + sum(a, j + 1, len));
}

int main()
{
    int a[SIZE];
    int n, sumarray;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    sumarray = sum(a, 0, n);
    printf("Sum of array elements: %d", sumarray);
    
    return 0;
}
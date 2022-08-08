#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter array elements:\n");
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    printf("\nValues stored at odd positions are:\n");
    for(i=n-1; i>=0; i--)
    {
        if(i%2!=0)
            printf("%d \t ", *(arr+i));
    }
    return 0;
}

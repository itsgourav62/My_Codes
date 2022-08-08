#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("\nSum of the array is : %d", sum);
    printf("\nAverage of the array is : %0.2f", (float)sum / n);
    return 0;
}
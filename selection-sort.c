//Write a C program to implement Selection Sort. Print output of all Passes.
#include<stdio.h>

void selection(int arr[], int num)
{
    int temp, small, count=0, index;
    printf("The input provided: ");
    for(int k=0; k<num;k++)
    {
        printf("%5d",arr[k]);
    }

    for(int i =0; i<(num-1); i++)
    {
        small = arr[i];
        for(int j=(i+1); j<num; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                count++;
                index = j;
            }
        }
        if(count!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
        count=0;
    
        printf("\nAfter pass %d :\t ", i);
        for (int k = 0; k < num; k++) 
        {
            printf("%5d", arr[k]);
        }
    }
}
int main()
{
    int num, arr[50], i;
    printf("Enter size for Array: ");
    scanf("%d", &num);
    printf("Enter %d array elements: ",num);
    for(i=0; i<num; i++)
        scanf("%d", &arr[i]);
    selection(arr, num);
    return 0;
}
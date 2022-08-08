
#include<stdio.h>

    int fibonacci(int n)
    {
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return (fibonacci(n-1)+fibonacci(n-2));
    }
int main()
 {
    int n,i=0;
    printf("Enter the number of terms : \n");
    scanf("%d",&n);
    printf("\nFibonacci Series: \n");
    for(int j=1;j<=n;j++)
    {
        printf("%d\n",fibonacci (i));
        i++;
    } 
  return 0;
 }

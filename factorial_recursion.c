
    #include<stdio.h>
    int fact(int);
    int main()
        {
            int n, f;
            printf("Enter a number:\n");
            scanf("%d",&n);

            f =fact(n);

            printf("\nFactorial of the given number %d is: %d",n, f);
            return 0;
        }
    int fact(int i)
    {

        if(i==0)
        return(1);

        return(i*fact(i-1));
    }

//C program to calculate arithmetic operations using switch statement
#include<stdio.h>
int main()
{
  int a,b;
  char c;
  printf("Enter two numbers with operator to perform the arithmetic operation :\n");
  scanf("%d %d %c", &a, &b, &c);

  switch(c)
  {
     case '+' : printf("Addition is : %d", a+b);
                break;
     case '-' : printf("Substraction is %d", a-b);
                break;
     case '*' : printf("Multiplication is %d", a*b);
                break;
     case '/' : printf("Division is %f", (float)a/b);
                break;
     default  : printf("No Output");
  }
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct student
    {
      char name[50];
      int roll;
      float m1;
      float m2;
      float avg;
    };
    int main()
    {
        int n,i;
        printf("Enter the number of Student : ");
        scanf("%d",&n);
        struct student s[n];
        struct student *ptr = NULL;
        ptr = (struct student *)malloc(n * sizeof(struct student));
        printf("\nEnter Student Details : \n");
        for(i=0; i<n ;++i)
    {
      printf("\nStudent %d : ",i+1);
      printf("\nName : ");
      scanf("%s",(ptr+i)->name);
      printf("Roll No : ");
      scanf("%d",&(ptr+i)->roll);
      printf("Marks 1 : ");
      scanf("%f",&ptr->m1);
      printf("Marks 2 : ");
      scanf("%f",&(ptr+i)->m2);
      (ptr+i)->avg = ((ptr+i)->m1 + (ptr+i)->m2)/2;
    }
    printf("\n\nStudent Details : ");
    for(i=0; i<n ; ++i)
    {
      printf("\n\nStudent %d : ",i+1);
      printf("\nName : %s",(ptr+i)->name);
      printf("\nRoll No : %d",(ptr+i)->roll);
      printf("\nMarks Average : %f",(ptr+i)->avg);
    }
    free(ptr);
    printf("\n");
    return 0;
  }

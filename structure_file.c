//Write records to a file using structure
# include <stdio.h>
int main( )
{
FILE *fp;
char another = 'Y' ;
struct emp
{
    char name[100] ;
    int age ;
    float bs ;
};
struct emp e ;
fp = fopen ("EMPLOYEE.txt","w") ;

if (fp==NULL)
{
    puts ("File doesn't exist\n") ;
    exit(1) ;
}
while (another =='Y')
{
    printf ("\nEnter name, age and basic salary:") ;
    scanf ("\n%s \n%d \n%f", e.name, &e.age, &e.bs) ;
    fprintf (fp, "\n%s \n%d \n%f", e.name, e.age, e.bs) ;
    printf ("Add another record (Y/N)") ;
    fflush (stdin) ;
    another = getche( ) ;
}
fclose (fp) ;
return 0 ;
}

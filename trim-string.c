#include <stdio.h>

void trim(char *s)
{
	int i,j;
	for(i=0;s[i]==' '||s[i]=='\t';i++)
  {
	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]='\0';
  }
}
int main()
{
    char s[100];
    printf("Enter the string : ");
    gets(s);
	  trim(s);
    printf("%s",s);
}

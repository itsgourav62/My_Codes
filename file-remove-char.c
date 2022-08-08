#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
  FILE *fp;
  char str[100] ;
  char ch;
  int i=0;
  fp = fopen("a.txt", "r");

  if (fp == NULL)
    {
        printf("File can't be opened %s for reading.\n");
        exit(0);
    }
    do
    {
      ch= fgetc(fp);
      if((ch>64&&ch<91)||(ch>96&&ch<123))
      {
        str[i]=ch;
        i++;
      }
    } while (ch != EOF);
    fclose(fp);
    str[i]='\0';
    fp=fopen("a.txt", "w");
    fprintf(fp, "%s",str);
    fclose(fp);
    printf("File is ready to open\n");
    return 0;
}





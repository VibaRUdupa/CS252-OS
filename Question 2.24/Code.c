//Question 2.24

#include<stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fptr1, *fptr2;
  char file1[200], file[200], c;

  printf("\n Please enter the file name to open for reading: ");
  scanf("%s", file1);
  printf("\n Please enter file name to open for writing: ");
  scanf("%s", file2);

  // Open file1 for reading
  if(fptr1 = fopen(file1,"r"))
  {
    // Open file2 for writing
    if(fptr2 = fopen(file2, "r"))
    {
      printf("The file already exists.\n");
      exit(0);
    }
    else
    {
      fptr2 = fopen(file2,"w")
      if(fptr2 == NULL)
      {
        printf("Can not open the file %s.\n", file2);
        exit(0);
      }

      //Read content from file1 to file2
      c = fgetc(fptr1);
      while(c!=EOF)
      {
        fputc(c, fptr2);
        c = fgetc(fptr1);
      }
      fclose(fptr1);
      fclose(fptr2);
      printf("The contents of the file are copied to %s.\n",file2);
    }
  }
  else
  {
    printf("The file does not exist.\n");
    exit(0);
  }
  return 0;
}

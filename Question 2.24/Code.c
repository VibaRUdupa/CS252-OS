// CS252 Operating systems minor
// Solution to Question 2.24
// Program to copy the content of one file to another.
// Viba R Udupa
// 191ME291

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Variable declaration
  FILE *fptr1, *fptr2;
  char file1[200], file[200], c;

  // Input file name to be read   
  printf("\n Please enter the file name to open for reading: ");
  scanf("%s", file1);
  
  // Open file1 for reading
  if(fptr1 = fopen(file1,"r"))
  {
    // File 1 exists
    
    // Get the name of the file to copy the data into from the user.
    printf("\n Please enter file name to open for writing: ");
    scanf("%s", file2);
    
    // Open file2 for writing
    if(fptr2 = fopen(file2, "r"))
    {
      // The file already exists and copying action will overwrite the existing content.
      printf("The file already exists.\n");
      exit(0);
    }
    else
    {
      // The destination file does not exist.
      // Create the destination file.
      fptr2 = fopen(file2,"w")
      if(fptr2 == NULL)
      {
        // File can not be created due to some system problem.
        printf("\n Can not open the file %s.\n", file2);
        exit(0);
      }
  
      // Destination file is successfully created to write.
      // Read content from file1 and write them to file2 character by character.
      c = fgetc(fptr1);
      while(c!=EOF)
      {
        fputc(c, fptr2);
        c = fgetc(fptr1);
      }
      
      // Close both the files
      fclose(fptr1);
      fclose(fptr2);
      printf("The contents of the file are copied to %s.\n",file2);
    }
  }
  else
  {
    // The source file does not exist
    printf("The file does not exist.\n");
    exit(0);
  }
  return 0;
}

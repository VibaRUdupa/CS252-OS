// CS252 Operating systems minor
// Solution to Question 3.21
// Program to print the Collatz conjecture series.
// Viba R Udupa
// 191ME291

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

// User Defined function declaration
void collatz(int i);

int main()
{
  char c,num[10];
  int n,len,i;
  
  while(1)
  {
    printf("\nWhat is your number? (Enter 'q' to quit) : ");
    gets(num);
    
    if(strcmp(num,"q")==0)
    {
      // Quit if input is 'q'
      exit(0);
    }
    
    n = atoi(num); // String to integer conversion
    if(n>2)
    {
        // Valid input
        collatz(n);
    }
    else
    {
        // Invalid input
        printf("enter valid input...\n");
    }

  }
  return 0;
}

void collatz(int i)
{
  // Process identification variable declaration.
  // Necessary headerfile - sys/types.h
  
  pid_t child_pid, wpid;
  int status = 0;

  if ((child_pid = fork()) == 0)// Child process creation
  {
    // The control is with newly created child process.
    // Only the child will execute the below block of code.
    
      while(i != 1)
      {
        // The series has not yet reached the end.
        
          printf("%d\t", i);
          if(i%2 == 0)
          {
              // n is even
              i /= 2;
          }
          else
          {
              // n is odd
              i = 3*i + 1;
          }
       }
       printf("1\n");
       exit(1);
   }
  
   while ((wpid = wait(&status)) > 0)
   {
     //After the child process is terminated, the wait() returns the pid of the terminated child process.
     // The parent has to wait till the chil terminates execution.
     
      printf("Child process exited\n");
   }
return;
}

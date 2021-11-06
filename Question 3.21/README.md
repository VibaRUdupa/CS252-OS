# Question 3.21 from Chapter: Processes

The Collatz conjecture concerns what happens when we take any positive integer n and apply the following algorithm:

      n =  n ∕ 2, if n is even
     
        =  3 * n + 1, if n is odd
      
The conjecture states that when this algorithm is continually applied, all positive integers will eventually reach 1. For example, if n = 35, the sequence is

  35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
  
Write a C program using the fork() system call that generates this sequence in the child process. The starting number will be provided from the command line. For example, if 8 is passed as a parameter on the command line, the child process will output 8, 4, 2, 1. Because the parent and child processes have their own copies of the data, it will be necessary for the child to output the sequence. Have the parent invoke the wait() call to wait for the child process to complete before exiting the program. Perform necessary error checking to ensure that a positive integer is passed on the command line.

# Details of the files uploaded in this folder

1. [Code.c](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%203.21/Code.c) - Program to print the Collatz conjecture series.
2. [Solutions](https://github.com/VibaRUdupa/CS252-OS/tree/main/Question%203.21/Solution) - Folder contains the screenshot of the output file.

# References for the Source Code

The base for the solution [Code.c](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%203.21/Code.c) was obtained from the source code in [UCM Assignments](http://ucmassignments.blogspot.com/2016/06/a-collatz-conjecture-collatz-conjecture.html). Few minor variable names were changed. 

NOTE: No license was found on their website. The author does not intend any copyright infringement.

# Results

The function fork() works only on Linux OS. Specific header files are to be loaded for operations related to processes that can not be done on Windows OS. To run this code, either use a Linux OS (by using a Virtual environment or dual booting) or this could also be executed on some of the online compilers. One of them is [programiz.com](https://www.programiz.com/c-programming/online-compiler/)

Screenshot of the output console is shown below:

<img src = "https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%203.21/Solution/Output%20Screenshot.PNG">

Windows users could also install [Cygwin](https://cygwin.com/install.html). Cygwin is a POSIX-compatible programming and runtime environment that runs natively on Microsoft Windows. Using this, source code can be designed as done in a Unix OS but can be compiled and executed on Windows. 

In addition to this, createprocess() is a function in Windows.h directory whose operations are similar to fork() in Linux.c

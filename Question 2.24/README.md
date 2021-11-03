# Question 2.24 from Chapter: Operating-System Structures

In Section 2.3, we described a program that copies the contents of one file to a destination file. This program works by first prompting the user for the name of the source and destination files. Write this program using either the POSIX or Windows API. Be sure to include all necessary error checking, including ensuring that the source file exists.

Once you have correctly designed and tested the program, if you used a system that supports it, run the program using a utility that traces system calls. Linux systems provide the strace utility, and macOS systems use the dtruss command. (The dtruss command, which actually is a front end to dtrace, requires admin privileges, so it must be run using sudo.) These tools can be used as follows (assume that the name of the executable file is FileCopy:

#### Linux:
        
        strace ./FileCopy
#### macOS:

        sudo dtruss ./FileCopy
        
Since Windows systems do not provide such a tool, you will have to trace through the Windows version of this program using a debugger.

# Details of files uploaded in this folder : 
1. [Code.c](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Code.c) - Program to copy content from source to destination file written in C programming language using Windows API.
2. [Solution](https://github.com/VibaRUdupa/CS252-OS/tree/main/Question%202.24/Solution) - Folder contains all the solution files and system call traces.
   1. [reading.txt](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Solution/reading.txt) - Source text file.
   2. [writing.txt](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Solution/writing.txt) - Destination text file created by the program.
   3. [log.apmx86](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Solution/log.apmx86) - Log output of the API Monitor
   4. [Log_File.csv](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Solution/Log_File.csv) - Log ouput represented in a CSV format

# References for Source Code

The base for the solution [Code.c](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Code.c) was obtained from the source code in [alltestanswers.com](https://www.alltestanswers.com/operating-systems-fundamentals-assignment-1/). However, small changes to the code structure were made apart from few variable names change.
The source code collects the source and destination file names prior to checking the existance of the source file. This was changed in the solution code where upon the confirmation of existance of source file, the destination file name is asked from the user.

NOTE: No license was found on their website. The author does not intend any copyright infringement. 

# Application for the system call tracer

Windows does not provide any default system call tracing utility and hence a third party software, "[API Monitor](http://www.rohitab.com/apimonitor)" was downloaded and used.
The details for the usage of this software is detailed in the [README.md](https://github.com/VibaRUdupa/CS252-OS/blob/main/Question%202.24/Solution/README.md) file in the [Solution](https://github.com/VibaRUdupa/CS252-OS/tree/main/Question%202.24/Solution) folder.

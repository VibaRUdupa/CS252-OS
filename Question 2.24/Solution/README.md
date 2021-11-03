# System Call Tracing in Windows

Software used: [API Monitor](http://www.rohitab.com/apimonitor)

### Download instructions
1. Download link(32 and 64 bit version): [API Monitor v2 (Alpha-r13) - x64 64-bit](http://www.rohitab.com/download/api-monitor-v2r13-setup-x64.exe) 
2. After downloading the .Zip file, extract the files to any location.

### Using the software for tracing

1. Run the application "apimonitor-x86.exe" from the extracted files in the .zip folder if your process is 32-bit.
2. After launching the application, in the "API Filter" side-bar, select the APIs that you want to track. 
   1. System Services
   2. Visual C++ Runtime Library
   3. NT Native
   4. Data access and storage
3. In the "Monitored process" dialog box, select "Monitor new process". A new dialog box opens where you can enter the full path of the executable file(compiled code, here with gcc compiler) and click "OK".
4. The program runs and a console opens for you to pass the arguments.
5. In the summary dialog box, the detailed system calls list can be found. The data can be copy pasted into an Excel file for further analysis. Hover over an API to get the function calls and the arguments passed. Select any row from the list to get further information about the call stack and the parameters passed. 

NOTE: [API Monitor tutorial 1](http://www.rohitab.com/api-monitor-tutorial-monitoring-your-first-application) was followed to trace system calls.

// In unix and unix-like computer operating system, a file descriptor is a process-unique identifier for a file. File descriptors typcally have non negative integer values being reserved to indicate no value or error 
// conditions. 
// File descriptors are part of the POSIX API. Each unix process should have three standard POSIX file descriptors corresponding to the three standard streems. 
//      
//      integer value            name            <unistd.h>symbolic constant          <stdio.h>file stream
//         0                 standard input         STDIN_FILENO                         stdin
//         1                 standard output        STDOUT_FILENO                        stdout
//         2                 standard error         STDERR_FILENO                        stderr
//
//
//
// On linux, the set of file descriptors open in a process can be acessed under the path /proc/PID/fd/ where PID is the process identifier. 
//
// /proc/PID/fd/0 is the stdin,  /proc/PID/fd/1 is stdout and /proc/PID/fd/2 is the stderr. As a shortcut to these, any running process can also access its own file descriptors through the folders /proc/self/fd and /dev/fd
//
//
// OPERATIONS IN FILE DESCRIPTORS
//
// The following lists typcal operationson file descriptors on modern unix-like systems. Most of these functions are declared in the <unistd.h> header file but some are in the <fcntl.h> header file 
//
// Creating File Descriptors .......We have commands like open(), create() socket(), accept(), socketpair() pipe(), and  many more
//
// Deriving File Descriptors ........ they are dirfd(), fileno()
//
// Operations on a single file descriptor .....some of them are read(), write(), readv(), writev() and many more 
//
// We have so many operations in the File Descriptors path

We have what we call relative path and absolute path in the unix shell

Relative path simply mean sfrom the current folder that I am in. I do I get to this oher folder. Absolute patth means you must start from your root folder. In absoute path you don't need to be to the current folder. No matter which directory you , Absolute path will always take you the specific file you direct it.

Quick Steps to Follow

1: Process Identifier (PID) and Parent Process Identifier (PPID);

2: Command Line Arguments (argc and argv);

3: Executing a Program (With execve system call;)

4: Creating process (With fork system call);

5: Suspending Processes (With the wait system call);

6: File information (With the stat system call);

7: Environment (printenv, etc);


Parent process is a process which creates a child process. Parent process identifier is simply a unique identifier of the parent process. We use getppid() to get the parent process identifier.

The environment is an area that the shell builds everytime that it starts a session that contain variables that define system properties. 

HOW THE ENVIRONMENT AND THE ENVIRONENTAL VARIBALES WORK

Everytime a shell session spwans, a process takes place to gather and compile information that should be available to the shell process and its child process. The environment provides a medium through which the shell process can get or set settings and in turn pass this to its child processes. The environment is implemented as strings that represent key-value pairs. If multiple values are passed, they are typically seperated by colon. 

Like for example.....KEY=value1:value2:. 

We can list all our envrionmental variables using the env and printenv commands. In their default states, they should exactly function the same. 

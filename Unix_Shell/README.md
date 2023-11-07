The Unix Shell is a command line interpreter or shell that provides a command line user interface for Unix-like Operating Systems. The shell is both an interractive commmand language and a scripting language and its used by the operating system to control the execution of the system using shell scripts. All unix shells provide filename wildcarding, piping, here documents, command substituion, variables and control structures for condition testing and iteration. 

THE CONCEPT:
Generally shell is a program that executes other programs in response to text commands. A sophisticated shell can  aslo change the environment in which other programs execute by passing named variables, a parameter list or an input source. 

EARLY SHELLS

The first unix shell was the Thompson shell,sh written by Ken Thompson at Bell labs and distributed with version 1 through 6 of Unix System. Its still used in some of the ancient unix systems. It was modelled after the multic shell. The PWB shell or Mashey shell was an upward-compatible version of the Thompson shell augumented by John Mashey and others and distributed with the Programmers Workbench Unix, circa 1975-1977. It is focused on making shell programming practical, especially in large shared computing centers. It added shell variables(precussors of environment variables including the search path mechanism that involved into $PATH), user-executable shell scripts and interrupt-handling. Control structures were extended from if/goto to if/then/else/endif, switch/breaksw/endsw, and while/end/break/continue. As shell programming became widespread, these external commands were incorporated into the shell itself for performance. The most widely distributed and influential of early unix shells were the Bourne Shell and the C Shell. Both shells have been used as the coding base and model for many derivative and work-alike shells with extended feature sets.

BOURNE SHELL
The Bourne shell,sh was a new Unix shell by Stephen Bourne at Bell labs. Distributed as  the shell for Unix Version 7 in 1979. It introduced the rest of the basic features considered common to all later Unix shells, including here documents, command substitution, more generic variables and more extensive builtin control structures. The language, including the use of a reversed keyword to mark the end of a block, was influenced by ALGO 68. Traditionally, the Bourne shell program name is sh and its path in the Unix file system hierachy is /bin/sh. But a number of compatble work alikes are also available with various improvements and additional features. On many systems sh may be a sysmbolic link or hard link to one of this alternatives : 

1: Almquist shell(ash): Written as a BSD-licensed replacement for the Bourne Shell.
2: Bourn-Again Shell(bash): written as part of GNU Project to provide a superset of Bourne Shell Functionality. This shell can be found installed and is the default interactive for users in most Linux Systems. 
3: KornShell(ksh): Writen by David Korn based on the Bourne Shell Sources while working at Bell Labs.
4: Public Domain Korn Shell(pdksh): Here we have MirBSD Korn Shell(mksh) a descendant of the OpenBSD /bin/ksh and pdksh, developed as part of MirOS BSD
5: Z shell(zsh): a relatively modern shell that is backward compatible with bash, its the default shell in Kali Linux and MacOS

The POSIX standard specifies its standard shell as a strict subset of the Korn Shell, an enhanced version of the Bourne Shell 

C SHELL
The C shell, csh, was modelled on the C Programming Language, including the control structures and the expression grammer. It was writen by Bill Jo as Graduate Student at the University of California and was widely distributed with BSD unix. 

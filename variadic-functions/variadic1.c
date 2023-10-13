// stdarg.h is a header file in C standard library of programming that allows a function to accept an indefinite number of arguments. It provides facilities for stepping through a list of function
// arguments of unknown number and type. The content of stdarg.h is typically used in variadic functions 
//
// DECLARATION OF A VARIADIC FUNCTION
//
// They are declared with an ellipsis in place of the last parameter. An example of such function is printf
//
// int check(int a, double b, ...);
//
// Variadic functions must have at least one named parameter, so for instance
//
// char *wrong(...); is not allowed in C but allowed in C++
//
//
// The same syntax is used in a definition...like the example below
//
// long func(char, double, int, ...);
// long func(char a, double b, int c, ...)
// {
// /* ... 
// }
//
//
// stdarg.h TYPES
//
// var_list - type for iterating arguments ... C89
// var_start - start iterating arguments with a var_list ... C89
// var_arg - retrieve an argument ... Compatibility is C89
// var_end -  free a va_list ... C89
// var_copy - copy contents of a var_list to another ..compatibility C99
//
// ACCESSING THE ARGUMENTS
//
// To access the unnamed arguments one must declare a variable of type var_list in the variadic function.The macro var_start is then called with two arguments 

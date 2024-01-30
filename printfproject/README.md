## Writing a `printf` function

This task is a group project involving building a `printf` function. 

## An Overview of the `printf` function

Creating a `printf` function involves understanding how to interpret a format string and then handle various types of arguments accordingly. 

1. Format String

This is a string that contains text and format specifiers. Format specifiers begin with the '%' character followed by one or more format characters, i.e. 'd' for integers, 'f' for floats, 's' for strings, etc. 

2. Argument Handling

The `printf` function needs to parse the format string and handle the corresponding arguments appropriately. For example, if the format string contains "%d", the function should expect an integer argument to be provided. 

3. Variable Arguments

In C, you can use the `stdarg.h` header to work with functions that accept a variable number of arguments. The `va_list`, `va_start`, `va_arg`, and `var_end` macros help manage these arguments.

4. Printing

Once you've parsed the format string and extracted the arguments, you need to output the formatted string to the console or another output stream. You can use functions like `printf`, `puts`, fputs`, `fwrite`, or even write directly to a file descriptor.

5. Handling Format Specifiers

The printf function should support common format specifiers such as %d for integers, %f for floats, %s for strings, %c for characters, %x for hexadecimal integers, etc. Each specifier should be handled appropriately.

6. Width and Precision

Format specifiers can include additional information like minimum field width and precision. For example, `%5d` specifies a minimum field width of 5 characters for an integer.

7. Error Handling

Errors should be handled gracefully, i.e. invalid format strings or insufficient arguments. 


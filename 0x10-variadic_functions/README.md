# Variadic functions

# Learning Objectives

* What are variadic functions
* How to use `va_start`, `va_arg` and `va_end` macros
* Why and how to use the `const` type qualifier

# Tasks

## 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

* Prototype: `int sum_them_all(const unsigned int n, ...);`
* If `n == 0`, return `0`

**Solution:** [0-sum_them_all.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x10-variadic_functions/0-sum_them_all.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# ./a
1122
500
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions#

```

## 1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

* Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between numbers
* and `n` is the number of integers passed to the function
* You are allowed to use `printf`
* If `separator` is `NULL`, don’t print it
* Print a new line at the end of your function

**Solution:** [1-print_numbers.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x10-variadic_functions/1-print_numbers.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# ./b
0, 98, -1024, 402
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# 
```

## 2. One woman's constant is another woman's variable

Write a function that prints strings, followed by a new line.

* Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
* where `separator` is the string to be printed between the strings
* and `n` is the number of strings passed to the function
* You are allowed to use `printf`
* If separator is NULL, don’t print it
* If one of the string is NULL, print `(nil)` instead
* Print a new line at the end of your function

**Solution:** [2-print_strings.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x10-variadic_functions/2-print_strings.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# vim README.md
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions# ./c
Jay, Django
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x10-variadic_functions#

```

## 3. To be is a to be the value of a variable

Write a function that prints anything.

* Prototype: void print_all(const char * const format, ...);
* where format is a list of types of arguments passed to the function
    * `c`: `char`
    * `i`: `integer`
    * `f`: `float`
    * `s`: `char *` (if the string is NULL, print `(nil)` instead
    * any other char should be ignored
    * see example
* You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
* You can use a maximum of
    * 2 `while` loops
    * 2 `if`
* You can declare a maximum of `9` variables
* You are allowed to use `printf`
* Print a new line at the end of your function

**Solution:** [3-print_all.c](ZZZZZXXXXX)

```
XXXZZZZZZZZ
```

## 4. Real programmers can write assembly code in any language

Write a 64-bit program in assembly that prints `Hello, Holberton`, followed by a new line.

* You are only allowed to use the system call `write` (use `int` or `syscall`, not a call)
* Your program will be compiled using `nasm` and `gcc` (as follows)

**Solution:** [100-hello_holberton.asm](XXXXXXXX)

```
XXXZZZZZZZZZZ
```

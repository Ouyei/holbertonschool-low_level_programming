# Function pointers

# Learning Objectives

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

# Tasks

## 0. What's my name 

Write a function that prints a name.

* Prototype: `void print_name(char *name, void (*f)(char *));`

**Solution:** [0-print_name.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/0-print_name.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# cat cat 0-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./a
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers#
```

## 1. If you spend too much time thinking about a thing, you'll never get it done 

Write a function that executes a function given as a parameter on each element of an array.

* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* where `size` is the size of the array
* and `action` is a pointer to the function you need to use

**Solution:** [1-array_iterator.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/1-array_iterator.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# cat 1-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./b
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers#
```

## 2. To hell with circumstances; I create opportunities 

Write a function that searches for an integer.

* Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
* where `size` is the number of elements in the array `array`
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
* If no element matches, return `-1`
* If size <= `0`, return `-1`

**Solution:** [2-int_index.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/2-main.c)

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# cat 2-main.c
#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./c
2
1
2
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers#
```

## 3. A goal is not always meant to be reached, it often serves simply as something to aim at 

Write a program that performs simple operations.

* You are allowed to use the standard library
* Usage: `calc num1 operator num2`
* You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
* `operator` is one of the following:
    * `+`: addition
    * `-`: subtraction
    * `*`: multiplication
    * `/`: division
    * `%`: modulo
* The program prints the result of the operation, followed by a new line
* You can assume that the result of all operations can be stored in an `int`
* if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
* if the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`
* if the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status `100`

**Solution:** [3-main.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-main.c), [3-op_functions.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-op_functions.c), [3-get_op_func.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-get_op_func.c), [3-calc.h](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x0F-function_pointers/3-calc.h)

### Compilation and examples

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1 + 1
2
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 97 + 1
98
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1024 / 10
102
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1024 '*' 98
100352
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1024 '\*' 98
Error
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1024 - 98
926
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# ./calc 1024 '%' 98
44
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers#
```

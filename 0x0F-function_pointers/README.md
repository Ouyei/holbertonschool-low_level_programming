# Function pointers

# Learning Objectives

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

# Tasks

## 0. What's my name 

Write a function that prints a name.

* Prototype: `void print_name(char *name, void (*f)(char *));`

**Solution:** [0-print_name.c]

```
root@cb1b0474dcd5:~/holbertonschool-low_level_programming/0x0F-function_pointers# cat cat 0-main.c                                cat: cat: No such file or directory
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


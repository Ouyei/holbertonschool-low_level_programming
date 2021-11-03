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
## If you spend too much time thinking about a thing, you'll never get it done

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


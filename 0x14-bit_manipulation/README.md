# Bit manipulation

# Learning Objectives

* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

# Tasks

## 0.0

Write a function that converts a binary number to an `unsigned int`.

* Prototype: `unsigned int binary_to_uint(const char *b);`
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 if
    * there is one or more chars in the string `b` that is not `0` or `1`
    * `b` is `NULL`

**Solution:** [0-binary_to_uint.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/0-binary_to_uint.c)

```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./a
1
5
0
98
402
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

## 1.1

Write a function that prints the binary representation of a number.

* Prototype: `void print_binary(unsigned long int n);`
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use `malloc`
* You are not allowed to use the `%` or `/` operators

**Solution:** [1-print_binary.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/1-print_binary.c)
```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 1-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./b
0
1
1100010
10000000000
10000000001
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

## 2.10

Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* where `index` is the index, starting from `0` of the bit you want to get
* Returns: the value of the bit at index `index` or `-1` if an error occured

**Solution:** [2-get_bit.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/2-get_bit.c)

```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./c
1
1
0
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

## 3.11 

Write a function that sets the value of a bit to 1 at a given index.

* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* where `index` is the index, starting from `0` of the bit you want to set
* Returns: `1` if it worked, or `-1` if an error occurred

**Solution:** [3-set_bit.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/3-set_bit.c)

```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 3-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./d
1056
1024
99
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

## 4.100

Write a function that sets the value of a bit to 0 at a given index.

* Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
* where `index` is the index, starting from `0` of the bit you want to set
* Returns: `1` if it worked, or `-1` if an error occurred

**Solution:** [4-clear_bit.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/4-clear_bit.c)

```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 4-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./e
0
0
96
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

## 5.101

Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
* You are not allowed to use the `%` or `/` operators

**Solution:** [5-flip_bits.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x14-bit_manipulation/5-flip_bits.c)

```
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# cat 5-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test# ./f
2
5
3
1
root@cf87ef314fe4:~/holbertonschool-low_level_programming/0x14-bit_manipulation/test#
```

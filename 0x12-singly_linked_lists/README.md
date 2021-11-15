# Singly linked lists

# Learning Objectives

* When and why using linked lists vs arrays
* How to build and use linked lists

# Tasks

## 0. Print list 

Write a function that prints all the elements of a list_t list.

* Prototype: `size_t print_list(const list_t *h);`
* Return: the number of nodes
* Format: see example
* If `str` is `NULL`, print `[0] (nil)`
* You are allowed to use `printf`

**Solution:** [0-print_list.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x12-singly_linked_lists/0-print_list.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# ./a
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists#
```


## 1. List length 

Write a function that returns the number of elements in a linked `list_t` list.

* Prototype: `size_t list_len(const list_t *h);`

**Solution:** [1-list_len.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x12-singly_linked_lists/1-list_len.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# ./b
-> 2 elements
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists#
```

## 2. Add node 

Write a function that adds a new node at the beginning of a list_t list.

* Prototype: `list_t *add_node(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`

**Solution:** [2-add_node.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x12-singly_linked_lists/2-add_node.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 2-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# ./c
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists#
```

## 3. Add node at the end 

Write a function that adds a new node at the end of a list_t list.

* Prototype: `list_t *add_node_end(list_t **head, const char *str);`
* Return: the address of the new element, or `NULL` if it failed
* `str` needs to be duplicated
* You are allowed to use `strdup`

**Solution:** [3-add_node_end.c](https://github.com/eyosi05/alx-low_level_programming/tree/main/0x13-more_singly_linked_lists)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 3-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# ./d
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists#
```

## 4. Free list 

Write a function that frees a `list_t` list.

* Prototype: `void free_list(list_t *head);`

**Solution:** [4-free_list.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x12-singly_linked_lists/4-free_list.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# valgrind ./e
==1891== Memcheck, a memory error detector
==1891== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1891== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==1891== Command: ./e
==1891==
[3] Bob
[1] &
[4] Kris
[4] love
[3] asm
==1891==
==1891== HEAP SUMMARY:
==1891==     in use at exit: 0 bytes in 0 blocks
==1891==   total heap usage: 11 allocs, 11 frees, 1,164 bytes allocated
==1891==
==1891== All heap blocks were freed -- no leaks are possible
==1891==
==1891== For lists of detected and suppressed errors, rerun with: -s
==1891== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists#
```

## 5. The Hare and the Tortoise 

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the main function is executed.

* You are allowed to use the `printf` function

**Solution:** [100-first.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x12-singly_linked_lists/100-first.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# cat 100-main.c
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# ./first
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
root@952625f534b7:~/holbertonschool-low_level_programming/0x12-singly_linked_lists# 
```

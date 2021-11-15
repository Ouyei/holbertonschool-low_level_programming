# 0x13. C - More singly linked lists

# Learning Objectives

* How to use linked lists
* Start to look for the right source of information without too much help

# Tasks

## 0. Print list 

Write a function that prints all the elements of a listint_t list.

* Prototype: `size_t print_listint(const listint_t *h);`
* Return: the number of nodes
* Format: see example
* You are allowed to use `printf`

**Solution:** [0-print_listint.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/0-print_listint.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# cat 0-main.c
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
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# ./a
9
8
-> 2 elements
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test#
```

## 1. List length 

Write a function that returns the number of elements in a linked `listint_t` list.

* Prototype: `size_t listint_len(const listint_t *h);`

**Solution:** [1-listint_len.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/1-listint_len.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# cat 1-main.c
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
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = listint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-listint_len.c -o b
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# ./b
-> 2 elements
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test#
```

## 2. Add node 

Write a function that adds a new node at the beginning of a `listint_t` list.

* Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**Solution:** [2-add_nodeint.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/2-add_nodeint.c)

```
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# cat 2-main.c
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
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    add_nodeint(&head, 98);
    add_nodeint(&head, 402);
    add_nodeint(&head, 1024);
    print_listint(head);
    return (0);
}
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# ./c
1024
402
98
4
3
2
1
0
root@952625f534b7:~/holbertonschool-low_level_programming/0x13-more_singly_linked_lists/test# 
```

## 3. Add node at the end 

Write a function that adds a new node at the end of a `listint_t` list.

* Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
* Return: the address of the new element, or `NULL` if it failed

**Solution:** [3-add_nodeint_end.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/3-add_nodeint_end.c)

```
ZXZXXZXZXZZZXXZXZ
```

## 4. Free list 

Write a function that frees a `listint_t` list.

* Prototype: `void free_listint(listint_t *head);`

**Solution:** [4-free_listint.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/4-free_listint.c)

```
ZXXXZZXXZZXZXXZZXXZ
```

## 5. Free 

Write a function that frees a `listint_t` list.

* Prototype: `void free_listint2(listint_t **head);`
* The function sets the `head` to `NULL`

**Solution:** [5-free_listint2.c](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x13-more_singly_linked_lists/5-free_listint2.c)

```
ZZXXZZXXZXZXZZXZXXZ
```

## 6. Pop 

Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).

* Prototype: `int pop_listint(listint_t **head);`
* if the linked list is empty return `0`

**Solution:** [6-pop_listint.c](ZZXZXXZZXXZXZXZXZXZZX)

```
ZZXXZZXXZXZXZZXZXXZ
```

## 7. Get node at index 

Write a function that returns the nth node of a listint_t linked list.

* Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
* where `index` is the index of the node, starting at `0`
* if the node does not exist, return `NULL`

**Solution:** [7-get_nodeint.c](ZXZXZZXXZXZXZXXZZXXZ)

```
ZXXZZXXXZXZ
```

## 8. Sum list 

Write a function that returns the sum of all the data (n) of a `listint_t` linked list.

* Prototype: `int sum_listint(listint_t *head);`
* if the list is empty, return `0`

**Solution:** [8-sum_listint.c](ZXZZXZXZXZXZXZ)

```
ZXXXZXZXZXZXZXZXZ
```

## 9. Insert 

Write a function that inserts a new node at a given position.

* Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
* where `idx` is the index of the list where the new node should be added. Index starts at `0`
* Returns: the address of the new node, or `NULL` if it failed
* if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

**Solution:** [9-insert_nodeint.c](ZXZZXZXZXZXZXZZXZ)

```
ZXZXZXZXXZZXZX
```

## 10. Delete at index 

Write a function that deletes the node at index index of a `listint_t` linked list.

* Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
* where `index` is the index of the node that should be deleted. Index starts at `0`
* Returns: ``1`` if it succeeded, ``-1`` if it failed

**Solution:** [10-delete_nodeint.c](ZXZXXZXZXZXZXZXZ)

```
ZXZXZXXZXZXZXZXZXXZXZXZ
```

# Makefiles

# Learning Objectives

* What are `make`, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

# Tasks

## make -f 0-Makefile

Create your first Makefile.

Requirements:

* name of the executable: `holberton`
* rules: `all`
    * The `all` rule builds your executable
* variables: none

**Solution:** [0-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/0-Makefile)

```
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 0-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# ./school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles#
```

## make -f 1-Makefile

Requirements:

* name of the executable: `holberton`
* rules: `all`
    * The `all` rule builds your executable
* variables: `CC`, `SRC`
    * `C`: the compiler to be used
    * `SRC`: the `.c` files

**Solution:** [1-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/1-Makefile)

```
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 1-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 1-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles#
```

## make -f 2-Makefile

Create your first useful Makefile.

Requirements:

* name of the executable: `holberton`
* rules: `all`
    * The `all` rule builds your executable
* variables: `CC`, `SRC`, `OBJ`, `NAME`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
* The `all` rule should recompile only the updated source files
* You are not allowed to have a list of all the ``.o`` files

**Solution:** [2-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/2-Makefile)

```
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 2-Makefile
gcc main.o school.o -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 2-Makefile
gcc main.o school.o -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# echo "/* School */" >> main.c
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles#
```

## make -f 3-Makefile

Requirements:

* name of the executable: `holberton`
* rules: `all`, `clean`, `oclean`, `fclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes the Emacs temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
    * `RM`: the program to delete files
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never fail
* You are not allowed to have a list of all the `.o` files

**Solution:** [3-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/3-Makefile)

```
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make -f 3-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# ls -1
0-Makefile
100-Makefile
1-Makefile
2-Makefile
3-Makefile
4-Makefile
5-island_perimeter.py
5-main.py
main.c
main.o
m.h
__pycache__
README.md
school
school.c
school.o
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make clean -f 3-Makefile
rm -f *~ school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make oclean -f 3-Makefile
rm -f main.o school.o
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make fclean -f 3-Makefile
rm -f *~ school
rm -f main.o school.o
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make all -f 3-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles#
```

## A complete Makefile

Requirements:

* name of the executable: `holberton`
* rules: `all`, `clean`, `fclean`, `oclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes the Emacs temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
    * `RM`: the program to delete files
    * `CFLAGS`: your favorite compiler flags: `-Wall` `-Werror` `-Wextra` `-pedantic`
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never fail
* You are not allowed to have a list of all the `.o` files

**Solution:** [4-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/4-Makefile)

```
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles# make all -f 4-Makefile
gcc main.c school.c -o school
root@baf6d2c088fb:~/holbertonschool-low_level_programming/0x1C-makefiles#
```

## Island Perimeter

Technical interview preparation:

    * You are not allowed to google anything
    * Whiteboard first

Create a function def `island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

    * `grid` is a list of list of integers:
        * 0 represents a water zone
        * 1 represents a land zone
        * One cell is a square with side length 1
        * Grid cells are connected horizontally/vertically (not diagonally).
        * Grid is rectangular, width and height don’t exceed 100
    * Grid is completely surrounded by water, and there is one island (or nothing).
    * The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

    * First line contains `#!/usr/bin/python3`
    * You are not allowed to import any module
    * Module and function must be documented

**Solution:** [5-island_perimeter.py](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/5-island_perimeter.py)

## make -f 100-Makefile

Requirements:

* name of the executable: `holberton`
* rules: `all`, `clean`, `fclean`, `oclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes the Emacs temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
    * `RM`: the program to delete files
    * `CFLAGS`: your favorite compiler flags: `-Wall` `-Werror` `-Wextra` `-pedantic`
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never fail
* You are not allowed to have a list of all the `.o` files
* You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
* You are not allowed to use the string `$(CC)` more than once in your Makefile
* You are only allowed to use the string `$(RM)` twice in your Makefile
* You are not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable)
* You are not allowed to have an `$(OBJ)` rule
* You are not allowed to use the `%.o`: `%.c` rule
* Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
* Your Makefile should not compile if the header file `m.h` is missing

**Solution:** [100-Makefile](https://github.com/Ouyei/holbertonschool-low_level_programming/blob/main/0x1C-makefiles/100-Makefile)

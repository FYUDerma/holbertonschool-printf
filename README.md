# :star2: C - printf 

## Project descrition

This 2 person team project is part of the first year curriculum at Holberton School, C24 from HDF.

### Concepts: 

For this project, we will use the following concepts:

```
**Approaching a Project**
**Group projects**
**Pair programming**
**Flowcharts**
```

### Requirements
 
Allowed editors: vi, vim, emacs.

All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

All your files should end with a new line.

A README.md file, at the root of the folder of the project is mandatory.

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables.

No more than 5 functions per file.

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation; do not push your own main.c file. Our main.c files might be different from the one shown in the examples.

The prototypes of all your functions should be included in your header file called main.h.

Don’t forget to push your header file.

All your header files should be include guarded.

Note that we will not provide the _putchar function for this project.

### Authorized functions & macros

```
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
```

### Prototype

```
int _printf(const char *format, ...);
```

### Specifiers
Indicate what type of data to display and how to display it. 
Some examples of common format specifiers:

```
* -%c: print a character
* -%s: print a character string
* - % : floating point number
* - %d: print a decimal integer
* - %i: print an integer number
```
### Compilation

Our code will be compiled in this way:

```
 $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
 ```

* As a consequence, be careful not to push any c file containing a **main** function in the root directory of your project (you could have a **test** folder containing all your tests files including main functions)
* Our main files will include your main header file (**main.h**): **#include main.h**
* You might want to look at the gcc flag **-Wno-format** when testing with your **_printf** and the standard printf. 

### Examples
```
_printf("Bonjour")
/* Expected output: Bonjour */
_printf("156")
/* Expected output: 156*/
```
### Flowchart

![This is the flowchart of our project.](https://github.com/FYUDerma/holbertonschool-printf/blob/main/flowchart.jpg)

### Authors
Binbin HE, github:@[binbinher](https://github.com/binbinher)

:email: @ binbin.he515@outlook.com

Zakaria AATTACHE, github:@[FYUDerma](https://github.com/FYUDerma)

:email: @9398@holbertonstudents.com
# 0x05. C - Pointers, arrays and strings

# Learning Objectives

## General

- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

# Requirements

## General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file

# Tasks

0. [98 Battery st.](./0-reset_to_98.c) : Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
1. [Don't swap horses in crossing a stream](./1-swap.c) : Write a function that swaps the values of two integers.
2. [This report, by its very length, defends itself against the risk of being read](./2-strlen.c) : Write a function that returns the length of a string.
3. [I do not fear computers. I fear the lack of them](./3-puts.c) : Write a function that prints a string, followed by a new line, to stdout.
4. [I can only go one way. I've not got a reverse gear](./4-print_rev.c) : Write a function that prints a string, in reverse, followed by a new line.
5. [A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes](./5-rev_string.c) : Write a function that reverses a string. 
6. [Half the lies they tell about me aren't true](./6-puts2.c) : Write a function that prints every other character of a string, starting with the first character, followed by a new line.
7. [Winning is only half of it. Having fun is the other half](./7-puts_half.c) : Write a function that prints half of a string, followed by a new line.
8. [Arrays are not pointers](./8-print_array.c) : Write a function that prints n elements of an array of integers, followed by a new line.
9. [strcpy](./9-strcpy.c) : Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
10. [Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers](./100-atoi.c) : Write a function that convert a string to an integer.
11. [Don't hate the hacker, hate the code](./101-keygen.c) : Create a program that generates random valid passwords for the program 101-crackme.

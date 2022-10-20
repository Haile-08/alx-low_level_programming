#ifndef _LIST_H_
#define _LIST_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_s;

typedef unsigned long int size_t;
typedef struct list_s list_t;

size_t print_list(const list_t *h);

#endif

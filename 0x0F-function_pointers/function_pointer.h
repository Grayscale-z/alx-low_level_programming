1-array_iterator.c.txt

Who has access

A

System properties

Type

Text

Size

491 bytes

Storage used

491 bytes

Location

0x0F-function_pointers

Owner

Antony Bahati

Modified

14:36 by Antony Bahati

Opened

20:57 by me

Created

14:45

No description

Viewers can download

#ifndef _FUNCTION_POINTERS_H_

#define _FUNCTION_POINTERS_H_



#include <stddef.h>



int _putchar(char);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));




clear
clear


:Wq

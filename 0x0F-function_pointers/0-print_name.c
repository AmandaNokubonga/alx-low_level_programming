#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: input string with the printed name.
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{ 
	if (name && f)
		return;
	f(name);
}

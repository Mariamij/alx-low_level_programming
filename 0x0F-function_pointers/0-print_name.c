#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: input name of the person
 * @f: function pointer
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name, void (*f)(char *))
{
	printf("Hello, my name is %s\n", name);
}

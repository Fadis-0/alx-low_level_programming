#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print the given name
 * @name: the name
 * @f: pointer to print_name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

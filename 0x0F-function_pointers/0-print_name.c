#include "function_pointers.h"
/**
 * print Name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

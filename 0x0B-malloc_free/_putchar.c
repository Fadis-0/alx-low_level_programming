#include "main.h"
#include <unistd.h>
/*
 * _putchar: writes the character to stdout
 * @c: The char to print
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

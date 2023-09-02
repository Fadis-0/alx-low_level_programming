#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

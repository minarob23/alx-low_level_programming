#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character с to stdout
 * @c: the character to print
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

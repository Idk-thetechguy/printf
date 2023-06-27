#include "main.h"

/**
 * _putchar - Outputs the character 'c' to the standard output.
 * @c: The individual to display.
 *
 * Return: 1 on success
 * On error, -1 the function returns, and the value of errno is adjusted
 *            accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));/*block*/
}

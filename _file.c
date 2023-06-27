#include "main.h"
/**
* printc - outputs a character.
* @pa: char format.
* @format: format
* Return: Format specifier for printf.
*/
int printc(char *format, va_list pa)/*prototype*/
{
(void)format;
_putchar(va_arg(pa, int));
return (1);
}

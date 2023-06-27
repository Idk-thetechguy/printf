#include "main.h"

/**
* printstr- display str.
* @pa: gtgtg
* @format: rearrange str.
* Return: integer str for display.
*/
int printstr(char *format, va_list pa) /*prototype*/
{
char *string = va_arg(pa, char *);
int contador;
(void)format;

if (string == NULL)
string = "(null)";
contador = _puts(string);
return (contador);
}

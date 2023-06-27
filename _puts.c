#include "main.h"
/**
* _puts - Displays a string
* new line, to stdout.
* @string: add string.
* Return: String length.
*/
int _puts(char *string) /*prototype*/
{
int contador = 0;
while (*string)
{
_putchar(*string);
string++;
contador++;
}
return (contador);
}

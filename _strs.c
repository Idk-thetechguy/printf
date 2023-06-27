#include "main.h"
/**
*print_char - produces symbol
*@args: argument
*
*Return: character
*/
int print_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
/**
*print_str - outputs text
*@args: arguments
*Return: string
*/
int print_str(va_list args)
{
int u;
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
for (u = 0; str[u]; u++)
{
_putchar(str[u]);
}
return (u);
}
/**
*print_pct - rephrases character "%"
*@args : arguments
*
*Return: character "%"
*/
int print_pct(va_list args)
{
(void)args;
return (write(1, "%", 1));
}

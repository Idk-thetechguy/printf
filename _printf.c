#include <stdarg.h>
#include "main.h"
/**
*_printf - Displaying information in the desired format
*@format: sequence of characters
*
*Return: quantity of characters displayed
*/
int _printf(const char *format, ...)
{
int i = 0, u = 0;
int (*f)(va_list);
va_list args;
va_start(args, format);
if (format == NULL || !format[i + 1])
return (-1);
while (format[i])
{
if (format[i] == '%')
{
if (format[i + 1])
{
if (format[i + 1] != 'c' && format[i + 1] != 's'
&& format[i + 1] != '%' && format[i + 1] != 'd'
&& format[i + 1] != 'i')
{
u += _putchar(format[i]);
u += _putchar(format[i + 1]);
i++;
}
else
{
f = get_func(&format[i + 1]);
u += f(args);
i++;
}
}
}
else
{
_putchar(format[i]);
u++;
}
i++;
}
va_end(args);
return (u);
}

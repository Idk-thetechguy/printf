#include "main.h"
/**
* print_dec - prints  outputs
* @args: the dispute numeric
*
* Return: opposite
*/
int print_dec(va_list args)
{
int value;
unsigned int abs, i, len;
unsigned int countn = 1;
len = 0;
value = va_arg(args, int);/*function*/
if (value < 0)
{
len = len + _putchar('-');
abs = value * -1;
}
else
abs = value;
i = abs;
while (i > 9)
{
i = i / 10;
countn = countn * 10;
}
while (countn >= 1)
{
len = len + _putchar(((abs / countn) % 10) + '0');
countn = countn / 10;
}
return (len);
}

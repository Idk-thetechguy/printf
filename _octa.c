#include "main.h"
/**
* printocta - outputs a hexadecimal representation
* @format: Convert to display hexadecimal
* @pa: Enumerate the collection comprising the hexadecimal values
* Return: number.
*/
int printocta(char *format, va_list pa)
{
unsigned int num = va_arg(pa, unsigned int);
unsigned int copia;
char *octa;
int u, u2 = 0, contame = 0;
(void)format;
if (num == 0)
return (_putchar('0'));
for (copia = num; copia != 0; u2++)
{
copia = copia / 8;
}
octa = malloc(u2);
if (!octa)
return (-1);
for (u = u2 - 1; u >= 0; u--)
{
octa[u] = num % 8 + '0';
num = num / 8;
}
for (u = 0; u < u2 && octa[u] == '0'; u++)
;
for (; u < u2; u++)
{
_putchar(octa[u]);
contame++;
}
free(octa);
return (contame);
}

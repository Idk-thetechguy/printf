#include "main.h"
/**
* printhex - displays a hexadecimal
* @format: Convert to display in hexadecimal.
* @pa: A collection of elements comprising hexadecimal values.
* Return: number.
*/
int printhex(char *format, va_list pa)
{
unsigned int num = va_arg(pa, unsigned int);
unsigned int num2;
int u, u2, copy, contame = 0;
char *numhex;
(void)format;
if (num == 0)
return (_putchar('0'));
for (num2 = num; num2 != 0; contame++)
{
num2 = num2 / 16;
}
numhex = malloc(contame);
for (u = 0; num != 0; u++)
{
copy = num % 16;
if (copy < 10)
numhex[u] = copy + '0';
else
numhex[u] = copy - 10  + 'a';
num = num / 16;
}
for (u2 = u - 1; u2 >= 0; u2--)
_putchar(numhex[u2]);
free(numhex);
return (contame);
}
/**
* printHEX - outputs a hexadecimally coded representation
* @format: Convert to display in hexadecimal.
* @pa: va_list that contains the hexadecimal to print
* Return: printed number of digits
*/
int printHEX(char *format, va_list pa)
{
unsigned int NUM = va_arg(pa, unsigned int);
unsigned int NUM2;
int I, I2, COPY, CONTAME = 0;
char *NUMHEX;
(void)format;
if (NUM == 0)
return (_putchar('0'));
for (NUM2 = NUM; NUM2 != 0; CONTAME++)
{
NUM2 = NUM2 / 16;
}
NUMHEX = malloc(CONTAME);
for (I = 0; NUM != 0; I++)
{
COPY = NUM % 16;
if (COPY < 10)
NUMHEX[I] = COPY + '0';
else
NUMHEX[I] = COPY - 10 + 'A';
NUM = NUM / 16;
}
for (I2 = I - 1; I2 >= 0; I2--)
_putchar(NUMHEX[I2]);
free(NUMHEX);
return (CONTAME);
}

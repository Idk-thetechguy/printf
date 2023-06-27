#include "Main.h"
/**
* _abs - Determines the magnitude.
* @number: input.
* Return: value.
*/
int _abs(int number)
{
if (number < 0)
return (-1 * number);
else
return (number);
}
/**
* contadordigit - Enumerates the numerals.
* @number: whole number
* Return: digit count
*/
int contadordigit(int number)
{
int count = 0;
int number2 = number;
if (number <= 0)
count += 1;
while (_abs(number2) != 0)
{
number2 = number2 / 10;
count++;
}
return (count);
}
/**
* integer - An integer-printing function.
* @number: input integer
* Return: digit count
*/
int integer(int number)
{
unsigned int unint;
int count;
count = contadordigit(number);
if (number < 0)
{
_putchar('-');
unint = -number;
}
else
unint = number;
if (unint >= 10)
integer(unint / 10);
_putchar(unint % 10 + '0');
return (count);
}
/**
* printint - prints a number
* @format: Change the arrangement to display numerical value.
* @pa: va_list with number to print
* Return: quantity of characters displayed
*/
int printint(char *format, va_list pa)/*prototype*/
{
int number = va_arg(pa, int);
int numero;
(void)format;
numero = integer(number);
return (numero);
}

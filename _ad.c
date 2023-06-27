#include "main.h"
/**
* driver - Fun categorizer.
* @format: string.
* Description: The operation iterates over the structs.
* selector[] ment of the struct.
* Return: pointer
* structype selector: Struct
*/
int (*driver(char *format))(char *format, va_list) /*prototype*/
{
int u;
structype selector[] = {
{"%c", printc},
{"%s", printstr},
{"%d", printint},
{"%i", printint},
{"%%", printpercent},
{"%x", printhex},
{"%X", printHEX},
{"%o", printocta},
{NULL, NULL}
};
if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (u = 0; selector[u].q; u++)
{
if (format[1] == selector[u].q[1])
return (selector[u].u);
}
return (NULL);
}

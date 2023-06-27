#include "main.h"
/**
* get_func - Verify the appropriateness of the specifier.
* @format: An individual to verify
* Return: a reference to the function
*/
int (*get_func(const char *format))(va_list)
{
int u;
func_t p[] = {
{"c", print_char},
{"s", print_str},
{"%", print_pct},
{"d", print_dec},
{"u", print_dec},
{NULL, NULL}
};
for (u = 0; p[u].t; u++)
{
if (*format == *(p[u].t))
{
return (p[u].f);
}
}
return (NULL);
}

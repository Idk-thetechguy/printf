#include <unistd.h>
/**
* _putchar - Display character using standard output.
* @ch: Translate the character into a visible representation.
* Return: output
*/
int _putchar(char ch) /*prototype*/
{
static int contador;
static char buffer[1024];
if (ch == -1)
{
contador = 0;
return (0);
}
if (ch == -2 || contador == 1024)
{
write(1, buffer, contador);
contador = 0;
}
if (ch != -1 && ch != -2)
{
buffer[contador] = ch;
contador++;
return (1);
}
return (0);
}

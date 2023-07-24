#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @p: string to be printed
 */


void print_rev(char *p)
{
int i, j, ten;
i = 0;
while (p[i] != '\0')
{
i++;
}
ten = i;
for (j = len - 1; j >= 0; j--)
{
_putchar(p[j]);
}
_putchar('\n');
}

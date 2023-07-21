#include "main.h"
/**
 *print_line - Prints a line of n _ character
 *@p: Long of the line
 *Return: Always 0
 */
void print_line(int p)
{
int i;
for (i = 0; i < p; i++)
_putchar('_');
putchar('\n');
}

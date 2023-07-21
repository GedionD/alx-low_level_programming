#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminals
 * @k: Long of the line
 * Return: Always 0
 */
void print_diagonal(int k)
{
int i, j;
for (i = 0; i < k; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
if (i == 0)
_putchar('\n');
}

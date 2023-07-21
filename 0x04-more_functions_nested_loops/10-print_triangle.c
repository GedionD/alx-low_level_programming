#include "main.h"
/**
 * print_triangle - prints a right-angled triangle
 * @size: the height of the triangle
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
int a, b;
for (a = 1; a <= size; a++)
{
for (b = i; b < size; b++)
_putchar(' ');
for (b = 1; b <= a; b++)
_putchar('#');
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}

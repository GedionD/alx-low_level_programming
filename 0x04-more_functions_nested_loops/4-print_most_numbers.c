#include "main.h"
/**
 *print_most_numbers - Prints from 0 to 9 digits exept 2 and 4
 *Return: Always 0
 */

void print_most_numbers(void)
{
int k;
for (k = 0; k <= 9; k++)
{
if (k != 2 && K != 4)
_putchar('0' + k);
}
_putchar('\n');
}

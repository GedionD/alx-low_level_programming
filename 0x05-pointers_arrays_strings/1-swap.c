#include "main.h"
#include <stdio.h>

/**
 * swap_int - Updates the value of the parameter
 * @a: The value
 * @b: The value
 *
 * Return: None
 */
void swap_int(int *a, int *b)
{
int m;
m = *a;
*a = *b;
*b =  m;
}

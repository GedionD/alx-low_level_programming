#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Description: This function swaps the values of two integers
 * using pointers.
 */
void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (indicating success).
 */
int main(void)
{
    int a;
    int b;

    /* Test case 1 */
    a = 98;
    b = 42;
    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    /* Test case 2 */
    a = 1024;
    b = -4096;
    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    /* Test case 3 */
    a = INT_MAX;
    b = INT_MIN;
    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    return (0);
}

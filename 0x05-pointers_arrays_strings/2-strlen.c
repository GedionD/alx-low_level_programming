#include "main.h"
/**
 * _strlen - Return the qty f bytes that a string has
 * @r: The string that i choose
 * Return: The long of the string as an integer number
 */
int _strlen(char *r)
{
int q = 0;
while (*(r + q) != '\0')
q++;
return (q);
}

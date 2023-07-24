#include "main.h"

/**
 *rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)

{
char tmp;
int i, ten, len1;
ten = 0;
len1 = 0;
while (s[ten] != '\0')
{
ten++;
}
len1 = ten - 1;
for (i = 0; i < ten / 2; i++)
{
tmp = s[i];
s[i] = s[len1];
s[len1--] = tmp;
}

}

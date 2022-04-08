0;10;1c0;10;1c#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
char alphabet;
for (alphabet = 122;  alphabet >= 97; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}

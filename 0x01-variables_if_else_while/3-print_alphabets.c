#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
while (uppercase <= 'z')
{
putchar(uppercase);
uppercaase += 1;
}
putchar('\n');
return (0);
}
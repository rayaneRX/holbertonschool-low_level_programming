#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int yoo
for (yoo = 0; yoo < 10; yoo++)
{
int boo
for (boo = 'a'; boo <= 'z'; boo++)
{
_putchar (boo);
}
_putchar ('\n');
}
}

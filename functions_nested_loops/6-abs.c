s (22 sloc) 254 Bytes
#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: integer
 * Return: 0
 */
int _abs(int n)
{
if (n < 0)
n = n * (-1);
putchar (n);
}

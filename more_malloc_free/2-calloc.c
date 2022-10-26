#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: integer
 * @size: integer
 *
 *Return: 0
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
{
ptr[i] = '\0';
}
return (ptr);
}
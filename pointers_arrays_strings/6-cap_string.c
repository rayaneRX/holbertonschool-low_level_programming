#include <stdio.h>
#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @s: variable
 * Return: 0
 */
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || i == 0)
s[i] = s[i] - 32;
if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.')
s[i] = s[i] - 32;
if (s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"')
s[i] = s[i] - 32;
if (s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
s[i] = s[i] - 32;
}
i++;
}
return (s);
}

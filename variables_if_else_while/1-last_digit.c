#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Program that prints the last digit of the number stored
 * Return: 0
 */
int main(void)
{
int n;
int boo;
srand(time(0));
n = rand() - RAND_MAX / 2;
boo = n % 10;
if (boo > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, boo);
}
else if (boo == 0)
{
printf("Last digit of %d is %d and is 0\n", n, boo);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, boo);
}
return (0);
}


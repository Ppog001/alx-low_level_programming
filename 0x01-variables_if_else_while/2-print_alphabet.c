#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 always(success)
 */
int main(void)
{
int x;

for (x = 'A'; x <= 'Z'; x++)
{
	putchar(x);
}
	putchar('\n');
	return (0);
}

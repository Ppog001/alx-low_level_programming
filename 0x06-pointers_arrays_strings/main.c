#include "main.h"
#include <stdio.h>

/**
 * main - calls other func.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Doing Hard Things!\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

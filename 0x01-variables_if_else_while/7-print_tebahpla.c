#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * Return: 0
**/

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

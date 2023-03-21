#include "main.h"

/**
 * main - print _putchar, followed by a new line.
 * Return: 0
 **/

int main(void)
{
	unsigned int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);

}

#include "main.h"
/**
 * prime_a - Main Entry
 * @a: input
 * @b: input
 * Return: 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - Main Entry
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}

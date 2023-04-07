#include "main.h"

int actual_prime(int n, int m);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: integer evaluated
 * Return: 1 if prine number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - checks if an int is prime recursively
 * @n: - int evaluated
 * @m: - iterator
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, m - 1));
}

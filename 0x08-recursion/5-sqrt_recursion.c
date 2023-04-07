#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: squared number
 * Return: natrural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursion findes natural sqrt of n
 * @n: squared number
 * @j: iterator
 * Return: resulting square root
 */
int _sqrt(int n, int j)
{
	int sqrt = j * j;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (j);
	return (_sqrt(n, j + 1));
}

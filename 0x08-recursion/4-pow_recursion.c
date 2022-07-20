#include "main.h"

/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y.
 * @x: The number to be raised to the power of y
 * @y: the number to raise x to the power of.
 * Return: x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}

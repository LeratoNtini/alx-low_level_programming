#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: is a integer number.
 * Return: 0 or 1.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

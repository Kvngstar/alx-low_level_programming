#include "main.h"

/**
 * _abs - calculate the abs value of int
 * @c: The number to be computed
 * Return: abs value or zero
 */

int  _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

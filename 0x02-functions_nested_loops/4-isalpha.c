#include "main.h"

/**
 * _isalpha - checks for aphabet character
 * @c: The character to be checked
 * Return: for alphabetics or 0 for others
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

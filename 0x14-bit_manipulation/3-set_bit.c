#include "main.h"

/**
 * set_bit.
 * @index: starting from 0
 * @n: pointer number of i
 * Return: 1 or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}

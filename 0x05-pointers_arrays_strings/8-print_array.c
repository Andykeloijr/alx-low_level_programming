#include "main.h"

/**
 *powB - raises the number base to power power
 *@base : the base
 *@power : the power
 *Return: return the answer
 */
int powB(int base, int power)
{
	int x, prod = 1;

	for (x = 0; x < power; x++)
	{
		prod = prod * base;
	}
	return (prod);
}

/**
 *numLength - returns the lenth of string
 *@num : operand number
 *Return: number of digits
 */
int numLength(int num)
{
	int len = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		len += 1;
	}


	return (len);
}

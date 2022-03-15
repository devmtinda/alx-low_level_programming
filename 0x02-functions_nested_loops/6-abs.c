#include "main.h"

/**
 * _abs - entry point
 * @n : number to check
 * Return:0 or 1 or -1
 *
 */
int _abs(int a)
{
	int res;

	if (a >= 0)
	{
		res = a;
	}
	else
	{
		res = a * -1;
	}
	return (res);
}

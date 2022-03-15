#include "main.h"

/**
 * _islower - entry point
 * return:0
 *
 */
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
		{
			return (1);
			break;
		}
	}
	return (0);
}

#include "main.h"

/**
 * _islower - entry point
 * return:0
 *
 */
int _islower(int c)
{
	int i = 'a';

	while (i < 'z')
	{
		if (c == i)
		{
			return (1);
			break;
		}
	}
	return (0);
}

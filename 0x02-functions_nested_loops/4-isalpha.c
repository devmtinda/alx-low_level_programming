#include "main.h"

/**
 * _isalpha - entry point
 * return:0
 *
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

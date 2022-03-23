#include "main.h"
/**
 * _strcmp - entry point
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len1, len2, cmp;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (len1 == len2)
		cmp = 0;

	else if (len1 > len2)
		cmp = 15;

	else if (len1 < len2)
		cmp = -15;

	return (cmp);
}

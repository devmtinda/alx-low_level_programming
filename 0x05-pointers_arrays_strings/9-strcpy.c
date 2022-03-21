#include "main.h"
/**
 * _strcpy - entry point
 * @dest: first pointer
 * @src: second pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

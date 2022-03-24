#include "main.h"
/**
 * rot13 - entry point
 * @s: string
 * Return: char
 */
char *rot13(char *s)
{
	int i, num;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		num = 0;

		while (alpha[num] != '\0')
		{
			if (s[i] == alpha[num])
			{
				s[i] = rot[num];
				break;
			}
			num++;
		}
	}
	return (s);
}

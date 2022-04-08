#include <stdlib.h>
/**
 * addtomem - adds string to memory
 * @mem: memory size
 * @s1: string one
 * @s2: string two
 * @len1: length of s1
 * Return: pointer
 */
char *addtomem(unsigned int mem, char *s1, char *s2, unsigned int len1)
{
	char *p;
	unsigned int i, j;

	p = malloc(mem);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	j = 0;

	while (i < (mem - 1))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';

	return (p);
}
/**
 * string_nconcat - concatenates string
 * @s1: string one
 * @s2: string two
 * @n: integer
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, mem;
	char *p;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
	{
		mem = sizeof(char) * (len2 + len1 + 1);
		p = addtomem(mem, s1, s2, len1);
	}
	else
	{
		mem = sizeof(char) * (len1 + n + 1);
		p = addtomem(mem, s1, s2, len1);
	}
	return (p);
}

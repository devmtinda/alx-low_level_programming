#include <stdlib.h>
/**
 * string_nconcat - concatenates string
 * @s1: string one
 * @s2: string two
 * @n: integer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j, mem;
	char *p;

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (n >= len2)
	{
		mem = sizeof(char) * (len2 + len1 + 1);
		p = malloc(mem);

		for (i = 0; i < len1; i++)
		{
			p[i] = s1[i];
		}
		j = 0;

		while (i < mem)
		{
			p[i] = s2[j];
			i++;
			j++;
		}
		p[i] = '\0';
	}
	else
	{
		mem = sizeof(char) * (len1 + n + 1);
		p = malloc(mem);

		for (i = 0; i < len1; i++)
                {
                        p[i] = s1[i];
                }
                j = 0;

                while (i < mem)
                {
                        p[i] = s2[j];
                        i++;
                        j++;
                }
                p[i] = '\0';

	}
	return (p);
}

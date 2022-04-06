#include <stdlib.h>
/**
 * argstostr - concatenates arguments of program
 * @ac: argument count
 * @av: argument vector
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len, size = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 1;

	while (i < ac)
	{
		for (len = 0; av[i][len] != '\0'; len++)
			;

		size = size + len + 1;
		i++;
	}
	p = malloc(size);

	if (p == NULL)
		return (NULL);

	i = 1;
	k = 0;

	while (i < ac)
	{
		for (len = 0; av[i][len] != '\0'; len++)
			;
		j = 0;

		if (k != 0)
			k += 1;

		while (j < len)
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		i++;
	}

	return (p);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * mem_size - returns required memory size
 * @str: string
 * Return: int
 */
int mem_size(char *str)
{
	int i, mem = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ' && i != 0)
			mem += 1;
	}
	mem += 1;
	return (mem);
}
/**
 * strtow - splits string into words
 * @str: string
 * Return: string array pointer
 */
char **strtow(char *str)
{
	int len, i, mem, k;
	char **p;

	if (str == NULL)
		return (NULL);

	mem = mem_size(str);

	p = malloc(mem);

	if (p == NULL)
		return (NULL);

	printf("Memory allocation is %i\n", mem);
	
	i = 0;

	while (mem--)
	{
		if (str[i] != ' ')
		{
			for (len = i; str[len] != ' '; len++)
				;
		}
		i++;
	}

	return (p);


}

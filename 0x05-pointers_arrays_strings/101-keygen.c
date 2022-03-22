#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int passwd;

	srand(time(0));
	passwd = rand() - RAND_MAX / 2;
	return passwd;
}

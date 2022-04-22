#include <stdio.h>
/**
 * before - runs before main function
 */
void __attribute__ (constructor) before()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

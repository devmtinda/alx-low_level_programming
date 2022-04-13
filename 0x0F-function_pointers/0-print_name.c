/**
 * print_name - prints name
 * @name: string
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

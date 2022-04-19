#ifndef VARIADIC_H
#define VARIADIC_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct format - structure
 * @operate: string
 */
typedef struct format
{
char *operate;
void f(void p);
} form;
#endif

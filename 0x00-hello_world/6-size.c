#include <stdio>
/**
* main - a program that prints the size of various computer types 
* Return 0 (success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char	:%lu byte(s)\n"(unsigned long)sizeof(a));
printf ("size of an int	:%lu byte(s) \n"(unsigned long)sizeof(b));
printf ("size of an long int	:%lu byte(s)\n"(unsigned long)sizeof(c));
printf ("size of an long long int	: %lu byte(s)\n"(unsigned long)sizeof(d));
printf ("size of an float	: %lu byte(s)\n" (unsigned long)sizeof(f));
return (0);
}

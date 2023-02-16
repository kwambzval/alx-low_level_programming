#include <stdio.h>
/**
 * main - Sizes
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int g;
	float h;

printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(h));
return (0);
}

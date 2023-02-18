#include <stdio.h>
/**
 * main -hexadecimal
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d <= 9) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}

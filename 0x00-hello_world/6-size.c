#include <stdio>
/**
 * main - diffrent sizes
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring data type */
	int a;
	long int b;
	long long int c;
	char d;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
/*Code successfully executed */
return (0);
}

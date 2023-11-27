#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to write.
 * Return: The number of characters written.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}


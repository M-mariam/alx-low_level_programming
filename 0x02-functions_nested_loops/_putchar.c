#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the characterc to stdout
 * @c: The character to print
 *
 * Return: 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

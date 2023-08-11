#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a
 *
 * Return: (0).
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchae(' ');
		}

		digit++;
	}
	putchar('\n');
	return (0);
}

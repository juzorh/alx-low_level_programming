#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 - Success
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					if ((i * 10) + j < (k * 10) + l)
					{
					putchar(i + 48);
					putchar(j + 48);
					putchar(32);
					putchar(k + 48);
					putchar(l + 48);
					if ((j == 8 && l == 9) && (i == 9 && k == 9))
					continue;
				putchar(44);
				putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

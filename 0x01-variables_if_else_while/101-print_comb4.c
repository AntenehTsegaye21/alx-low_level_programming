#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 9; i <= 17; i++)
	{
		for (j = 17; j <= 25; j++)
		{
			for (k = 25; k <= 33; k++)
			{
				if (j > i && j > k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 14 || j != 23)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

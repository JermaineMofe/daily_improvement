/**
 * more excercise on for statement
 * using loop
 */

#include <stdio.h>

int main(void)
{
	int i, j, sum;
	sum = i + j;
	return (0);

	for (i = 0, j = 1; i < 8; i++, j++)
	{
		sum = i + j;
		printf("%d - %d = %d\n", i, j, sum);
	}
	return (0);
}

/**
 * writing a program of sum of two integers
 * using the do_while loop
 */

#include <stdio.h>

int main(void)
{
	int i, j;
	i = 0;
	j = 1;
	printf("the values of i\tvalues of j\tvalues of i+j\n");
	do {
		i++;
		j++;
		printf(" %d + %d = %d\n", i, j, i + j);
	} while (i < 8);
	return (0);
}

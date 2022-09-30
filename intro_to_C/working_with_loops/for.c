/* writing a for loop  program*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	for (i = 0, j = 1; i < 8; i++, j++)
	printf(" %d + %d= %d\n", i, j, i + j);
	return (0);
}

/**
 * writing my first while programm
 */

#include <stdio.h>
int main(void)
{
	int i, j;
	char k;
	k = 'a';
	while (i != 7)
	{
		for (i = 0, j = 1; i < 7; i++, j++)
			printf(" %d + %d = %d\n", i, j, i + j);
	}
	printf("the value of i is %d not 7\n", i);
	return (0);
}

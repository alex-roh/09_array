
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int s[3][5];
	int i, j;
	int value = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			s[i][j] = value++;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", s[i][j]);
		}
		printf("\n");
	}


	return 0;
}



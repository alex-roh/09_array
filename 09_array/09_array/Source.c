
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i;
	
	int grade[5];
	int score[5];
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = { 1, 2, 3, 7, 5 };

	int flag_same = 1;
	
	for (i = 0; i < 5; i++)
	{
		grade[i] = rand() % 100;
		score[i] = grade[i];
		printf("grade[%d] = %d, score[%d] = %d\n", i, grade[i], i, score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		if (a[i] != b[i])
			printf("different value: index %d\n", i);
		else
			printf("same value : index %d\n", i);
	}

	return 0;
}
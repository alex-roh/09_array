
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i, average, grade[5];
	int sum = 0;

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		printf("put grade %i: ", i);
		scanf_s("%d", &grade[i]);
		sum += grade[i];
	}

	for (int i = 0; i < 5; i++)
	{
		printf("grade 1: %d\n", grade[i]);
	}

	printf("average: %d\n", sum / 5);

	return 0;

}
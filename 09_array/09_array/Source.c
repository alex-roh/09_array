
#include <stdio.h>
#include <stdlib.h>

void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void) 
{

	int list[5] = { 1, 2, 3, 4 };

	print_array(list, 4);
	square_array(list, 4);
	print_array(list, 4);

	return 0;
}

void square_array(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size)
{
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
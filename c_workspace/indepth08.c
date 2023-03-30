#include <stdio.h>
#include <stdlib.h>

void print2DDynamicMatrix(int** a, int rows, int columns)
{
	int i, j; // "i" will be used to iterate over rows, "j" will beused to iterated over columns
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			// a[i][j]
			printf("%9d", a[i][j]);
		}
		printf("\n");
	}
}


#include <stdio.h>
#include <stdlib.h>

int** allocate2DMatrix_opt2(int rows, int columns)
{
	int** a;
	int rows, columns;
	int i;
	a = (int**)calloc(rows, sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < rows; i++)  // Allocating an Array of Integers for every row.
	{
		a[i] = (int*)calloc(columns, sizeof(int));
		if (!a[i])
		{
			// #TODO --> freeMatrix
			return NULL;
		}
	}
	return a;
}

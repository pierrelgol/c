#include <stdio.h>
#include <stdlib.h>

int** allocate2DMatrix()
{
	int** a;
	int rows, columns;
	int i;

	printf("Enter number of rows for the 2D Matrix: ");
	scanf("%d", &rows);

	a = (int**)calloc(rows, sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < rows; i++)  // Allocating an Array of Integers for every row.
	{
		printf("Enter number of columns for row %d: ", i + 1);
		scanf("%d", &columns);
		a[i] = (int*)calloc(columns, sizeof(int));
		if (!a[i])
		{
			// #TODO --> freeMatrix
			return NULL;
		}
	}
	return a;
}

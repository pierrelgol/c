#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* arr[5];
	int i;
	int numOfColumns;
	for (i = 0; i < 5; i++)
	{
		printf("Please enter number of columns for this row: ");
		scanf("%d", &numOfColumns);
		arr[i] = (int*)calloc(numOfColumns, sizeof(int));
	}

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* arr[5];
	arr[0] = (int*)calloc(1, sizeof(int));
	arr[1] = (int*)calloc(2, sizeof(int));
	arr[2] = (int*)calloc(2, sizeof(int));
	arr[3] = (int*)calloc(3, sizeof(int));
	arr[4] = (int*)calloc(3, sizeof(int));

  return 0;
}

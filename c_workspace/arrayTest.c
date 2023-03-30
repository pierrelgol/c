#include <stdio.h>

int main(){

  int array[10] = {0,6,9,5,4,3,2,7,0,0};
  int i, j;

  int array2d[5][5] = {{0,0,0}};
  
  for ( i = 0; i < 5; ++i ) {
    for ( j = 0; j < 5; ++j ) {
      printf("Array[%i][%i] = 0x%o\n",i,j,&array2d[i][j]);
    }
  }

  for ( i = 0; i < 10; ++i ) {
    printf("Array[%i] = 0x%o\n",i,&array[i]);
  }

  printf("\n");
  
  return 0;
}

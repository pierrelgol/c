#include <stdio.h>

int main(){

  int n, i, j;

  printf("Enter n for the triangle\n");
  scanf("%i",&n);

  for ( i = 1; i <= n; ++i ) {
    for ( j = 1; j <= i; ++j ) {
      printf("%i",i);
    }
    printf("\n");
  }

  return 0;
}

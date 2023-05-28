/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

int bit_test(unsigned int number, int bitNumber);

int main() {

  assert(bit_test(10,0) == 0);
  printf("Test................................................................................Passed\n");
  assert(bit_test(10,1) == 1);
  printf("Test................................................................................Passed\n");
  assert(bit_test(10,2) == 0);
  printf("Test................................................................................Passed\n");
  assert(bit_test(10,3) == 1);
  printf("Test................................................................................Passed\n");
  assert(bit_test(10,4) == 0);
  printf("Test................................................................................Passed\n");

  return EXIT_SUCCESS;
}

int bit_test(unsigned int number, int bitNumber) {
  unsigned int mask = 1;
  mask = ( 1 << bitNumber);
  return ( number & mask ) != 0;
}

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

//--------------------[     MAIN METHOD     ]--------------------------------//

int main(void) {
  unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
  unsigned int rotate(unsigned int value, int n);
  printf("%x\n", rotate(w1, 8));
  printf("%x\n", rotate(w1, -16));
  printf("%x\n", rotate(w2, 4));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 44));
  return 0;
}

unsigned int insSize(){
  unsigned int val = ~0, bits = 0;
  while ( val != 0 ){
    val >>= 1;
    ++bits; 
  }
  return bits;
}

unsigned int rotate(unsigned int value, int n) {
  unsigned int result, bits , intSize = intSize;
  if (n == 0)
    result = value;
  else if (n > 0) { // left rotate
    bits = value >> (intSize - n);
    result = value << n | bits;
  } else { // right rotate
    n = -n;
    bits = value << (intSize - n);
    result = value >> n | bits;
  }
  return result;
}

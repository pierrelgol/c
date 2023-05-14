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

#define EPSILON 0.00001
// #define EPSILON 0.0001
// #define EPSILON 0.001
// #define EPSILON 0.01

/*3. Modify Program 7.8 so that the value of epsilon is passed as an argument
     to the function. Try experimenting with different values of epsilon to see
     the effect that it has on the value of the square root. */

// Function to calculate the absolute value of a number
float absoluteValue(float x) {
  if (x < 0)
    x = -x;
  return (x);
}

// Function to compute the square root of a number
float squareRoot(float x, const float epsilon) {
  float guess = 1.0;
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;

  return guess;
}

int main(void) {

  printf("squareRoot (2.0) = %f\n", squareRoot(2.0, EPSILON));
  printf("squareRoot (144.0) = %f\n", squareRoot(144.0, EPSILON));
  printf("squareRoot (17.5) = %f\n", squareRoot(17.5, EPSILON));

  return 0;
}

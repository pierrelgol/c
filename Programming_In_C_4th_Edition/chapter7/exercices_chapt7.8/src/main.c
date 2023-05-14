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

// Function to calculate the absolute value of a number
double absoluteValue(double x) {
  if (x < 0)
    x = -x;
  return (x);
}

// Function to compute the square root of a number
float sqrRoot(const double x) {
  const double epsilon = .00001;
  double guess = 1.0;
  while (absoluteValue(guess * guess - x) >= epsilon)
    guess = (x / guess + guess) / 2.0;
  return guess;
}

int main() {

  double a, b, c, discriminant, x1, x2;

  printf("Enter the value for a, b, c :\n");
  scanf(" %lf %lf %lf", &a, &b, &c);

  discriminant = sqrRoot(((b * b) - (4 * a * c)));

  if ( discriminant < 0 ){    
    printf("The discriminant are imaginary\n");
  }else{
    x1 = (-b + sqrRoot((b * b) - (4 * a * c))) / ( 2 * a);
    x2 = (-b - sqrRoot((b * b) - (4 * a * c))) / ( 2 * a);
    printf("The roots of the equation are : x1 = %lf | x2 = %lf\n",x1,x2);
  }

  return EXIT_SUCCESS;
}

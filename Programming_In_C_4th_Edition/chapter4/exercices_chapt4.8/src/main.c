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
  
  int n, number, triangularNumber, counter, count_to;

    printf("How many triangular numder do you want to process ?\n");
    scanf("%i", &count_to);
  
    triangularNumber = 0;
  for (counter = 1; counter <= count_to; ++counter) {

    printf("What triangular number do you want? ");
    scanf("%i", &number);
    triangularNumber = 0;

    for (n = 1; n <= number; ++n)
      triangularNumber += n;
    printf("Triangular number %i is %i\n\n", number, triangularNumber);
  }

  return 0;
}
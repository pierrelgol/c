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

// Program to reverse the digits of a number
int main(void)
{
  int number, right_digit;
  
  printf("Enter your number.\n");
  scanf("%i", &number);
  
  while (number != 0) {
    right_digit = number % 10;
    printf("%i", right_digit);
    number = number / 10;
  }
  
  printf("\n");
  
  return 0;
}

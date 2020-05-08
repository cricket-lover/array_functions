#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"

int main(void)
{
  Int_Array *numbers = malloc(sizeof(Int_Array));
  numbers->length = 4;
  numbers->values = malloc(sizeof(int) * numbers->length);
  numbers->values[0] = 2;
  numbers->values[1] = 3;
  numbers->values[2] = 4;
  numbers->values[3] = 5;
  printf("Original array: ");
  display_int_array(numbers);
  Int_Array *squares = map(numbers, square_of_num);
  printf("Mapped array: ");
  display_int_array(squares);
}
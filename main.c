#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"
#include "array_methods.h"

int main(void)
{
  Int_Array *numbers = malloc(sizeof(Int_Array));
  numbers->length = 4;
  numbers->values = malloc(sizeof(int) * numbers->length);
  numbers->values[0] = 11;
  numbers->values[1] = 14;
  numbers->values[2] = 31;
  numbers->values[3] = 2;
  printf("Original array: ");
  display_int_array(numbers);

  bubble_sort(numbers);
  display_int_array(numbers);
}
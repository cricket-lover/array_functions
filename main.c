#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"
#include "array_methods.h"

int main(void)
{
  Int_Array *numbers = malloc(sizeof(Int_Array));
  numbers->length = 4;
  numbers->values = malloc(sizeof(int) * numbers->length);
  numbers->values[0] = 12;
  numbers->values[1] = 1;
  numbers->values[2] = 9;
  numbers->values[3] = 31;
  printf("Original array: ");
  display_int_array(numbers);

  selection_sort(numbers);
  display_int_array(numbers);
  // Int_Array *squares = map(numbers, square_of_num);
  // Int_Array *evens = filter(numbers, is_even);
  // int sum = reduce(numbers, add, 0);

  // printf("Mapped array with squares: ");
  // display_int_array(squares);
  // printf("Even filtered array: ");
  // display_int_array(evens);
  // printf("sum is %d\n", sum);
}
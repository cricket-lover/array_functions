#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"

int square_of_num(int a)
{
  return a * a;
}

int is_even(int a)
{
  return a % 2 == 0;
}

int add(int a, int b)
{
  return a + b;
}

void display_int_array(Int_Array *array)
{
  for (int i = 0; i < array->length; i++)
  {
    printf("%d ", array->values[i]);
  }
  printf("\n");
}

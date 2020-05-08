#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"

void display_int_array(Int_Array *array)
{
  for (int i = 0; i < array->length; i++)
  {
    printf("%d ", array->values[i]);
  }
  printf("\n");
}


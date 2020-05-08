#include <stdlib.h>
#include "int_array.h"

int square_of_num(int a)
{
  return a * a;
}

Int_Array *map(Int_Array *array, Fn_Ref mapper)
{
  Int_Array *newArray = malloc(sizeof(Int_Array));
  newArray->length = array->length;
  newArray->values = malloc(sizeof(int) * newArray->length);
  for (int i = 0; i < array->length; i++)
  {
    newArray->values[i] = mapper(array->values[i]);
  }

  return newArray;
}

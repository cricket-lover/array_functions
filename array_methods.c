#include <stdlib.h>
#include "int_array.h"
#include "array_methods.h"

Int_Array *map(Int_Array *array, Fn_Ref mapper)
{
  Int_Array *newArray = malloc(sizeof(Int_Array));
  newArray->length = array->length;
  newArray->values = malloc(sizeof(int) * newArray->length);
  for (int i = 0; i < array->length; i++)
  {
    newArray->values[i] = (*mapper)(array->values[i]);
  }

  return newArray;
}

Int_Array *filter(Int_Array *array, Fn_Ref predicate)
{
  int temp_array[array->length];
  int count = 0;
  for (int i = 0; i < count; i++)
  {
    if ((*predicate)(array->values[i]))
    {
      temp_array[count] = array->values[i];
      count++;
    }
  }
  return create_int_array_from(temp_array, count);
}

int reduce(Int_Array *array, ArthimeticFn reducer, int context)
{
  for (int i = 0; i < array->length; i++)
  {
    context = (*reducer)(context, array->values[i]);
  }
  return context;
}

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
  Int_Array *newArray = malloc(sizeof(Int_Array));
  newArray->length = array->length;
  newArray->values = malloc(sizeof(int) * newArray->length);
  int index = 0, i = 0;
  while (i < array->length)
  {
    if ((*predicate)(array->values[i]))
    {
      newArray->values[index] = array->values[i];
      index++;
    }
    i++;
  }
  newArray->length = index;
  newArray->values = realloc(newArray->values, sizeof(int) * newArray->length);
  return newArray;
}

int reduce(Int_Array *array, Reducer reducer, int context)
{
  for (int i = 0; i < array->length; i++)
  {
    context = (*reducer)(context, array->values[i]);
  }
  return context;
}

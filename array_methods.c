#include <stdio.h>
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
  for (int i = 0; i < array->length; i++)
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

void selection_sort(Int_Array *numbers)
{
  for (int i = 0; i < numbers->length; i++)
  {
    int index_of_min = i;
    for (int j = i + 1; j < numbers->length; j++)
    {
      if (numbers->values[j] < numbers->values[index_of_min])
      {
        index_of_min = j;
      }
    }
    int temp = numbers->values[index_of_min];
    numbers->values[index_of_min] = numbers->values[i];
    numbers->values[i] = temp;
  }
}

void bubble_sort(Int_Array *numbers)
{
  for (int i = 0; i < numbers->length; i++)
  {
    int swaps = 0;
    for (int j = 1; j < numbers->length; j++)
    {
      if (numbers->values[j] < numbers->values[j - 1])
      {
        int temp = numbers->values[j];
        numbers->values[j] = numbers->values[j - 1];
        numbers->values[j - 1] = temp;
        swaps++;
      }
    }
    if (swaps == 0)
    {
      break;
    }
  }
}

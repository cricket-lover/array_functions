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

Int_Array *create_int_array_from(int *values, int length)
{
  Int_Array *newArray = malloc(sizeof(Int_Array));
  newArray->length = length;
  newArray->values = malloc(sizeof(int) * newArray->length);
  for (int i = 0; i < newArray->length; i++)
  {
    newArray->values[i] = values[i];
  }
  return newArray;
}


void display_int_array(Int_Array *array)
{
  for (int i = 0; i < array->length; i++)
  {
    printf("%d ", array->values[i]);
  }
  printf("\n");
}

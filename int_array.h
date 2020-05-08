#ifndef __INT_ARRAY
#define __INT_ARRAY

typedef int (*Fn_Ref)(int);
typedef int (*Reducer)(int, int);
typedef int *Int_Ptr;
typedef struct
{
  int *values;
  int length;
} Int_Array;

void display_int_array(Int_Array *array);

#endif
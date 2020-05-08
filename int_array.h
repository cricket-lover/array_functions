#ifndef __INT_ARRAY
#define __INT_ARRAY

typedef int (*Fn_Ref)(int);
typedef int *Int_Ptr;
typedef struct
{
  int *values;
  int length;
} Int_Array;

int square_of_num(int a);
Int_Array *map(Int_Array *array, Fn_Ref mapper);
void display_int_array(Int_Array *array);

#endif
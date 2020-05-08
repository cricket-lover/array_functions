#ifndef __INT_ARRAY
#define __INT_ARRAY

typedef int (*Fn_Ref)(int);
typedef int (*ArthimeticFn)(int, int);
typedef int *Int_Ptr;
typedef struct
{
  int *values;
  int length;
} Int_Array;

int square_of_num(int a);
int is_even(int a);
int add(int a, int b);
Int_Array *create_int_array_from(int *values, int length);
void display_int_array(Int_Array *array);

#endif
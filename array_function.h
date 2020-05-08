#ifndef __ARRAY_FUNCTIONS
#define __ARRAY_FUNCTIONS

int square_of_num(int a);
int is_even(int a);
int add(int a, int b);
Int_Array *map(Int_Array *array, Fn_Ref mapper);
Int_Array *filter(Int_Array *array, Fn_Ref predicate);
int reduce(Int_Array *array, Reducer reducer, int context);

#endif
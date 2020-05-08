#ifndef __ARRAY_METHODS
#define __ARRAY_METHODS

Int_Array *map(Int_Array *array, Fn_Ref mapper);
Int_Array *filter(Int_Array *array, Fn_Ref predicate);
int reduce(Int_Array *array, Reducer reducer, int context);

#endif
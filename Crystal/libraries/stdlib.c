#include "stdlib.h"

u_int8_t * malloc(int *size)
{
    u_int8_t new_array[size];
    return &new_array;
}


/*
    8/30/23
    programmer-666
    fformula.c
*/

#include "fformula.h"

float root(float number)
{
    // For calculating nearest root
    // Uses iteration
    // Although not good in terms of performance, it still works
    // \lim_{a \to x}a^{2}< x
    float a = 0;

    while (a*a < number){
        a += ROOT_ITER; // Incremental value
    }

    return a;
}

//float pwr(float base, float exp)
//{
//    long double r = 1.0;
//
//    while (exp !=0){
//        r *= base;
//        --exp;
//    }
//    
//    return r;
//}
// Cant calculate root doesnt work; use root function
// We dont need anymore this function

float fformula(float *array, unsigned size)
{
    float avg = 0;
    float t = 0;
    
    // fformula function to calculate this formula:
    // \sum^{n(x))}_{k \in x}\sqrt{\left | k-\bar{x} \right |}
    // This function typically quantifies the extent to
    // which the elements within a set deviate from the mean
    // The formula needs the average and the length of the array that comes as a parameter

    for (register unsigned i = 0; i < size; i++){
        avg += array[i];
    }
    avg /= size; // Average of array

    for (register unsigned i = 0; i < size; i++){
        t += (array[i] - avg < 0) ? root((array[i] - avg) * -1) : root((array[i] - avg));
    }

    return t;
}

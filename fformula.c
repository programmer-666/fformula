/*
    programmer-666
    fformula.c
*/

#include <stdio.h>
#include "fformula.h"

float a_it = 0;

long double pwr(float base, float exp){
    register long double r = 1.0;

    while (exp !=0){
        r *= base;
        --exp;
    }
    
    return r;
}

double sqroot(double number){
    register double a_itx = 0;
    register unsigned short counter = 0;

    while (counter < C_MAX){
        if (a_itx * a_itx > number){
            a_itx -= 1/(1*pwr(10, counter));
            counter += 1;
        }else{
            a_itx += 1/(1*pwr(10, counter));
        }
    }

    return a_itx;
}

float fformula(float *array, unsigned size){
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
        t += (array[i] - avg < 0) ? sqroot((array[i] - avg) * -1) : sqroot((array[i] - avg));
    }

    return t;
}

// Cant calculate root doesnt work; use root function
/*
float root(float number){

    // For calculating nearest root
    // Uses iteration
    // Although not good in terms of performance, it still works
    // \lim_{a \to x}a^{2}< x

    // This function discarded for bad performance

    
    register unsigned short c = 0;
    while ( (number/pwr(E, c))*(number/pwr(E, c)) > number ){
        c++;
        a_it = number/pwr(E, c);
    }

    while (a_it * a_it < number){
        a_it += ROOT_ITER; // Incremental value
    }

    return a_it;

}
*/
/*
unsigned int bpwr(unsigned short base, unsigned short exp){
    
    // experimental

    unsigned int result = 1;

    while (exp > 0){
        if (exp & 1){
            result *= base;
        }
        base *= base;
        exp >>= 1;
    }
    return result;
}
*/

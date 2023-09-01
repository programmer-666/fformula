/*
    programmer-666
    fformula.h
*/

#ifndef FFORMULA_H_
#define FFORMULA_H_
#define ROOT_ITER   1e-7    // Big values makes calculation times long; look at fformula.c:9
#define RITER_A     1e-3    // Root iterator for a

float fformula(float *array, unsigned size);
//float pwr(float base, float exp); // For more information go to fformula.c:24
float root(float number);

#endif
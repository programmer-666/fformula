/*
    programmer-666
    fformula.h
*/

#ifndef FFORMULA_H_
#define FFORMULA_H_
#define ROOT_ITER   1e-1    // Big values makes calculation times long
#define C_MAX       10       // Max value for sqroot iteration
#define E           2.718281828459045235

long double pwr(float base, float exp); 
float fformula(float *array, unsigned size);
//float root(float number);
double sqroot(double number);
//unsigned int bpwr(unsigned short base, unsigned short exp); // bitwise power, for 1*10^x

#endif

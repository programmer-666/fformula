#include <stdio.h>
#include <time.h>
#include <math.h>
#include "fformula.h"

int main(){
    clock_t st, et;
    float test = 2;
    float sqr, r, msqr;


    st = clock();
    sqr = sqroot(test);
    printf("%0.15f\n", sqr);
    et = clock();

    printf("%f\n\n", (double)(et - st) / CLOCKS_PER_SEC);

    st = clock();
    msqr = sqrt(test);
    printf("%0.15f\n", msqr);
    et = clock();

    printf("%f\n\n", (double)(et - st) / CLOCKS_PER_SEC);

    printf("%0.15f\t%0.15f", fabsf(sqr-msqr), fabsf(r-msqr));

    return 0;
}

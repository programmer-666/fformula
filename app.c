#include <stdio.h>
#include <time.h>
#include "fformula.h"

int main(){
    clock_t st, et;
    st = clock();

    //printf("%0.15f\n", root(2));
    printf("%0.15f\n", root(271441));
    
    et = clock();

    printf("\n\n%f", (double)(et - st) / CLOCKS_PER_SEC);
    return 0;
}
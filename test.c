#include <stdio.h>
#include <math.h>

double approx(double num, double root, int n_dec) {
    double nat_num = 1;
    while (pow(nat_num, root) <= num) {
        nat_num++;
    }

    double result = nat_num;

    for (int d = 1; d <= n_dec; d++) {
        double increment = pow(10, -d);
        int count = 1;
        double before = result;

        while (pow(before + increment * count, root) <= num) {
            result = before + increment * count;
            count++;
        }
    }

    return round(result, n_dec);
}

int main() {
    printf("%0.10f\n", approx(531610, 2, 10));
    return 0;
}

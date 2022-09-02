#include <stdlib.h>


int factorial(int x) {
    int ans = 1;

    for (int i = 1; i <= x; i++) {
        ans *= i;
    }

    return ans;
}

double exp(double x, int precision) {
    // e ^ x = 1 + x ** 1 / 1! + x ** 2 / 2! + x ** 3 / 3!
    // e ^ x = 1 + x / 1 + (x * x) / (1 * 2) + (x * x * x) / (1 * 2 * 3)...

    double ans = 1;

    for (int i = 0; i <= precision; i++) {
        double num = 1;
        for (int j = 0; j <= i; j++) {
            num *= x;
        }

        ans += num / factorial(i);
    }

    return ans;
}

double ln(double x, double precision) {
    /// ln x = ∫ 1/x dx from 1 to x

    double ans = 0;
    double eval = 1;

    while (eval < x) {
        ans += (1 / eval) * precision;
        eval += precision;
    }

    return ans;
}

double power(double x, double y) {
    // x ** y = e ** (y * ln x)

    double precision = .001;

    return exp(y * ln(x, precision), precision);
}
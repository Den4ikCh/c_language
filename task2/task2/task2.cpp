#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <iostream>

int main()
{
    double sum = 0;
    double current = pow(1, 3) / 1;
    int n = 0;
    double epsilon = 1e-6;
    double x;
    scanf("%lf", &x);
    printf("%f", x);

    while (15 * M_E - sum > epsilon) {
        sum += current;
        n++;
        current *= pow(n + 1, 3) / pow(n, 4);
    }

    printf("sum = %.15f\n", sum);
    printf("15e = %.15f\n", 15 * M_E);
}
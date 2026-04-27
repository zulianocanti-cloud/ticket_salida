#include <stdio.h>

int main(void) {
    double n1;
    double n2;
    double n3;
    double promedio;

    if (scanf("%lf %lf %lf", &n1, &n2, &n3) != 3) {
        return 1;
    }

    promedio = (n1 + n2 - n3) / 3.0;
    printf("%.2f\n", promedio);

    return 0;
}

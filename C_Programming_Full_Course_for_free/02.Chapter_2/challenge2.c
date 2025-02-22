#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, calc;
    printf("Input one of the short side of the triangle\n");
    scanf("%lf", &a);
    printf("Input the other short side of the triangle\n");
    scanf("%lf", &b);
    calc = sqrt((pow(a, 2.0) + pow(b, 2.0)));
    printf("Hypotenuse value is: %.2lf\n", calc);

    return 0;
}

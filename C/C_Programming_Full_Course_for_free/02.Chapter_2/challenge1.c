#include <math.h>
#include <stdio.h>
int main() {
    double radio;
    const double PI = 3.14159;
    printf("How many radians have the circle?\n");
    scanf("%lf", &radio);
    double area = (pow(radio, 2.0) * PI);
    double radius = (PI * radio * 2.0);
    printf("Circle radius is: %lf\n", radius);
    printf("Circle area is: %lf\n", area);
    return 0;
}

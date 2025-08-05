#include <math.h>
#include <stdio.h>

int main() {

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14);
    int D = ceil(3.0000001); //go to next number
    int E = floor(3.99); //go to int number, for example 3
    double F = fabs(-100.0); //convert into positive, delete sign 
    double G = log(3.0); //logarithm
    double H = sin(45.0); //sin
    double I = cos(45.0); //cos
    double J = tan(45.0); //tan
    printf("\n%.1f\n", A);
    printf("\n%.1f\n", B); 
    printf("\n%d\n", C);
    printf("\n%d\n", D);
    printf("\n%d\n", E);
    printf("\n%.1lf\n", F);
    printf("\n%.1f\n", G);
    printf("\n%.1f\n", H);
    printf("\n%.1f\n", I);
    printf("\n%.1f\n", J);
    return 0;
}

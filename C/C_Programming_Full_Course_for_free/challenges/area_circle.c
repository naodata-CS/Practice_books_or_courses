#include <stdio.h>
int main(){
    const float PI = 3.1416;
    float radio, operation, perimeter;
    printf("Enter the radio: \n");
    scanf("%f",&radio);
    operation = PI * radio * radio;
    perimeter = 2 * PI * radio;
    printf("Circle area is %f and the perimeter is %f\n", operation, perimeter);
    return 0;
}

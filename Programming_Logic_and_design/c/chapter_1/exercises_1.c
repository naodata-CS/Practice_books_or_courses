#include <math.h>
#include <stdio.h>

int main() {
    /* Excercise 1 */

    int number;
    printf("Write a number that you will divide by 2: \n");
    scanf("%d", &number);
    const double divided = 2;
    double operation = number / divided;
    printf("The result is: %.2lf\n", operation);

    /* Excercise 2 */

    printf("Enter size of one side of the cube:\n");
    double side;
    scanf("%lf", &side);
    double volume = pow(side, 3.0);
    double surface_area = ((pow(side, 2.0) * 6));
    printf("Surface area of the cube is: %.2lf\nand volume is %.2lf\n",
           surface_area, volume);

    /* Excercise 3 */

    printf("Enter two values to multiplie in the next two lines:\n");
    double number1, number2;
    scanf("%lf", &number1);
    scanf("%lf", &number2);
    double x_operation = number1 * number2;
    printf("Value of two numbers multiplied  is: %.2lf\n", x_operation);

    /* Excercise 4 */

    double length;
    double width;
    printf("Enter the length of the room:\n");
    scanf("%lf", &length);
    printf("Enter the width of the room:\n");
    scanf("%lf", &width);
    double calculate = length * width;
    double calculate_6_inch = (calculate / (pow(0.5, 2.0)));
    printf("The square fit of the room is: %.2lf sq ft\n", calculate);
    printf("The 6-inch square needed for the floor are: %.2lf sqrs\n",
           calculate_6_inch);

    /* Exercise 5 */

    double length_room, width_room, area_square_feet, galon_price, galon_area,
        galon_need, wall_number, calc, calc_walls;
    printf("Enter the value of the length:\n");
    scanf("%lf", &length);
    printf("Enter the width of the room:\n");
    scanf("%lf", &width);
    area_square_feet = length * width;
    printf("The square feet of the room is: %.2lf\n", area_square_feet);
    printf("Enther the galon price:\n");
    scanf("%lf", &galon_price);
    printf("Enther the area that galon covers:\n");
    scanf("%lf", &galon_area);
    printf("Enther the number of walls do you have:\n");
    scanf("%lf", &wall_number);
    area_square_feet = (length * width) - (wall_number * 14);
    galon_need = (area_square_feet / galon_area);
    printf("Galons needed for painting the room are: %.2lf\n", galon_need);
    calc = (galon_need * galon_price);
    printf("Price of galons for painting the room is: %.2lf\n", calc);

    /* Excercise 6 */
    double dolar, euro, japan, exchange_euro, exchange_japan;
    printf("How many dollars de you want to exchange:\n");
    scanf("%lf", &dolar);
    euro = (dolar * 0.96);
    japan = (dolar * 150.45);
    printf("El valor de intercambio de tus dolares a euros es %.2lf y a moneda "
           "japonesa es de %.2lf\n",
           euro, japan);
    return 0;
}

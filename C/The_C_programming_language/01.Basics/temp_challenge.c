#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = upper;
    /*
    while (lower <= fahr ) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f%6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }*/
    for (fahr = 300; fahr >= 0 ; fahr = fahr - step)
	    printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

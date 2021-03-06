#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */

main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;      /* lower limit of temperature table */
	upper = 300;    /* upper limit */
	step = 20;      /* step size */

	printf("Fahrenheit to Celsius table\n");

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}


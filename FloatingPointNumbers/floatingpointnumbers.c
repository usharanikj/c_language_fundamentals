#include <stdio.h>

int main() 
{
	float f = 1.2345678912345678f;   // Value assigned as a float
	double d = 1.2345678912345678;  // Value assigned as a double
	
	printf("Float (Default Precision): %f\n", f);
	printf("Double (Default Precision): %lf\n", d);

	// Explicitly request higher precision to see the difference
	printf("Float (High Precision):   %.17f\n", f);
	printf("Double (High Precision):  %.17lf\n", d);

/* The output for the high-precision prints will show that the float value starts to show inaccuracies (junk digits) after the 6th or 7th decimal place, whereas the double value will remain accurate for approximately 15 or 16 decimal places. */

	return 0;
}



/* printf function, when using the %f format specifier (or %lf for double, which is treated the same as %f in printf), has a default display precision of 6 digits after the decimal point.

To see the actual difference in the underlying precision, you need to explicitly tell printf to display more decimal places than the default 6, which you do by specifying a precision value (e.g., %.10f for 10 digits). */

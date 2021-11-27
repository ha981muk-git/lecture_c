/* C-demoprogramm fuer die Ungenauigkeit von Gleitkommazahlen */

#include <stdio.h>

int main() {
	double double1 = 123456789.0;	/* 32-Bit double ist mit 48 Bit Mantisse */
	double double2 = 0.123456789;
	
	printf("double1: %22.12lf, double2: %22.12lf\n  Summe: %22.12lf\n",
				double1, double2, double1+double2);

	return 0;
}

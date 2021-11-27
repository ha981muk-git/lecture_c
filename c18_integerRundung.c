/* C-Demoprogramm fuer die Integer-Division mit double Cast */

#include <stdio.h>

int main() {
	int ergebnis;
	
/*	ergebnis = (double)((double)7 + (double)3 / (double)10 * (double)2);	*/
	ergebnis = (int)((7.0 + 3.0 / 10.0 * 2.0) + 0.5);
	
	printf("ergebnis: %i\n", ergebnis);

	return 0;
}

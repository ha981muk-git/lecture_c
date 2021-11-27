/* C-Demoprogramm fuer die Integer-Division */

#include <stdio.h>

int main() {
	int ergebnis;
	
	ergebnis = 7 + 3 / 10 * 2;	/* Prioritaeten beachten */
					/* 3 / 10 ergibt 0 wg. Integer-Division */
	
	printf("ergebnis: %i\n", ergebnis);

	return 0;
}

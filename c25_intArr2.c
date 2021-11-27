/* C-Demoprogramm fuer ein Integer-Array */

#include <stdio.h>

#define	ARRLEN 10			/* Groesse des Arrays vordefinieren */
					/* als Praeprozessor-Konstante */

int main() {
	int intArr [ARRLEN] = {42, -1, 1234, 0, -123, 17, 1, -12, 998765, 17 };
					/* Array aus Ganzzahlen mit Initialisierung */
	int i = 0;			/* Schleifenvariable */
	
	for(i=0; i < ARRLEN ; i++) {	/* Ausgabe-Schleife */
		printf("intArr[%i] = %i\n", i, intArr[i]);
	}

	return 0;
}

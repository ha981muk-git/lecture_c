/* C-Demoprogramm fuer ein Integer-Array */

#include <stdio.h>

#define	ARRLEN 10			/* Groesse des Arrays vordefinieren */
					/* als Praeprozessor-Konstante */

int main() {
	int intArr [ARRLEN];		/* Array aus Ganzzahlen */
	int i = 0;			/* Schleifenvariable */
	
	for(i=0; i < ARRLEN ; i++) {	/* Initialisierungs-Schleife */
		intArr[i] = i*i;	/* Quadratzahlen als Beispiel */
	}
	
	for(i=0; i < ARRLEN ; i++) {	/* Ausgabe-Schleife */
		printf("intArr[%i] = %i\n", i, intArr[i]);
	}

	return 0;
}

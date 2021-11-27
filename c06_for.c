/* C-Demoprogramm fuer die for-Schleife */

#include <stdio.h>

int main() {
	int i;		/* Schleifenvariable */
	
	for (i = 1; i < 100; i++) {/* Schleifenvariable nach dem Durchlauf weiterschalten */
	
		if (i%2 == 1) {		/* Erweiterung: nur gerade Zahlen ausgeben */
			continue;	/* ungerade Zahlen ueberspringen */
		}
		
		if (i > 67) {		/* Erweiterung: irgend ein anderes Kriterium */
			break;		/* Schleife abbrechen */
		}
		
		printf("Wert von i ist: %i\n", i);	
	}

	return 0;
}

/* C-Demoprogramm fuer die while-Schleife */

#include <stdio.h>

int main() {
	int i;		/* Schleifenvariable */
	
	i = 1;
	
	while (i < 100) {
		printf("Wert von i ist: %i\n", i);
		
		i++;	/* Schleifenvariable weiterschalten */
	}

	return 0;
}

/* C-Demoprogramm fuer die do-while-Schleife */

#include <stdio.h>

int main() {
	int i;		/* Schleifenvariable */
	
	i = 1;
	
	do {
		printf("Wert von i ist: %i\n", i);
		i++;	/* Autoinkrement der Schleifenvariablen */	
	} while (i < 100);

	return 0;
}

/* C-Demoprogramm fuer den Ganzzahl-Ueberlauf ohne Vorzeichen */

#include <stdio.h>
#include <values.h>		/* wegen MAXINT */

int main() {
	unsigned long ganz;	/* Ganzzahl ohne Vorzeichen, also alles positiv */
	
	ganz = MAXINT;
	printf("(1) ganz: %lu\n", ganz);
	
	ganz = 2 * MAXINT + 1;	/* bis ans Limit der unsigned int gehen */
	printf("(1b) ganz: %lu\n", ganz);
	
	ganz++;
	printf("(2) ganz: %lu\n", ganz);
	
	ganz++;
	printf("(3) ganz: %lu\n", ganz);
	
	ganz--;
	printf("(4) ganz: %lu\n", ganz);
	
	ganz--;
	printf("(5) ganz: %lu\n", ganz);
	
	ganz--;
	printf("(6) ganz: %lu\n", ganz);
	
	return 0;
}

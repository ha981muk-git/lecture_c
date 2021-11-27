/* C-Demoprogramm fuer den Ganzzahl-Ueberlauf */

#include <stdio.h>
#include <values.h>		/* wegen MAXINT */

int main() {
	int ganz;
	
	ganz = MAXINT;
	
	printf("(1) ganz: %i\n", ganz);
	
	ganz++;
	printf("(2) ganz: %i\n", ganz);
	
	ganz++;
	printf("(3) ganz: %i\n", ganz);
	
	ganz--;
	printf("(4) ganz: %i\n", ganz);
	
	ganz--;
	printf("(5) ganz: %i\n", ganz);
	
	ganz--;
	printf("(6) ganz: %i\n", ganz);
	
	return 0;
}

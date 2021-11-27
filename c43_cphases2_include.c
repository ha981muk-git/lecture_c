/* C-Demoprogramm fuer die Phasen des C-Compilers */

#include <stdio.h>

#define START 17

int main() {
	int a = START, b;
	
	b = 42 * a;
	
	printf("Der Wert der Variable b ist: %i\n", b);

	return 0;
}

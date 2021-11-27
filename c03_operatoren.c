/* C-Demoprogramm fuer einige Operatoren */

#include <stdio.h>

int main() {
	int a = 3, b, c;	/* Ganzzahlen */
	
	b = a++;	/* Autoinkrement rechts: Aenderung NACH der Zuweisung */
	printf("a++: Werte: a = %i, b = %i\n", a, b);
	
	a = 3;		/* Wert von a wieder zuruecksetzen */
	b = ++a;	/* Autoinkrement rechts: Aenderung VOR der Zuweisung */
	printf("++a: Werte: a = %i, b = %i\n", a, b);

	/* Integer-Division */
	
	a = 7;
	b = 4;
	c = a / b;
	printf("Integer-Division: Werte: a = %i, b = %i, a / b = %i\n", a, b, c);
	
	/* modulo-Operation ("Rest-Operation") */

	a = 7;
	b = 4;
	c = a % b;
	printf("modulo-Operation: Werte: a = %i, b = %i, a %% b = %i\n", a, b, c);

	return 0;
}

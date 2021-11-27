/* unser erstes C-Programm */

#include <stdio.h>	/* Header-Datei fuer printf() inkludieren (hereinkopieren) */

int main() {
	int i;		/* unsere erste Variablendefinition */
	
	i = 23;		/* unsere erste Zuweisung */
	
	printf("i hat den Wert %i\n", i);
	
	return 0;	/* Rueckgabe eines Ganzzahl-Wertes: 0 bedeutet: alles ging gut */
}

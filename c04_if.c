/* C-Demoprogramm fuer die if-Abfrage */

#include <stdio.h>	/* Header-Datei fuer printf() inkludieren (hereinkopieren) */

int main() {
	int i;		/* unsere erste Variablendefinition */
	
	i = 234;	/* unsere erste Zuweisung */
	
	printf("i hat den Wert %i\n", i);
	
	if (i == 23) {	/* Vergleichsoperator (nicht mit der Zuweisung verwechseln!) */
		printf("BINGO! i hat den Wert 23\n");
		return 0;	/* signalisieren: alles ist gut */
	}
	else {
		printf("NO BINGO! i hat den Wert %i\n", i);
		return 1;	/* signalisieren: nichts ist gut */
	}
	
	/* hier kommen wir nie mehr her */
}

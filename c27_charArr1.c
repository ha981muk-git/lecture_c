/* C-Demoprogramm fuer eine Zeichenketten-Eingabeschleife */

#include <stdio.h>

int main() {
	char charArr [81];	/* 80 Zeichen einer Bildschirmzeile + 1 Platz fuer das Nullbyte  */
	int i = 0;		/* Schleifenvariable */
	char c;			/* Hilfsbuchstabe fuer das Einlesen */
	
	printf("Bitte Zeichen eingeben, Ende mit STRG-D: ");
	
	do {
		c = getchar();
		
		if (c == EOF) {	/* Abbruch durch Benutzer */
			break;
		}
		
		charArr[i] = c;	/* eingelesenes Zeichen im Array abspeichern */
		i++;	
	} while (c != EOF && i < 81 - 1);	/* Array-Laenge und Platz fuer Nullbyte pruefen */
	
	charArr[i] = '\0';	/* Nach der Eingabeschleife die Zeichenkette terminieren */
	
	printf("\nEingabe: |%s|\n", charArr);	/* Kontrollausgabe der Eingabe */

	return 0;
}

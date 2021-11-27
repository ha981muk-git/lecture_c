/* C-Demoprogramm fuer eine Zeichenketten-Eingabeschleife */

#include <stdio.h>

void eingabe (char cArr[], int size) {	/* generische Version fuer Arrays beliebiger Laenge */
	int i = 0;		/* Schleifenvariable */
	char c;			/* Hilfsbuchstabe fuer das Einlesen */

	printf("sizeof(cArr) = %lu, (size = %i)\n", sizeof(cArr), size);
		
	do {
		c = getchar();
		
		if (c == EOF) {	/* Abbruch durch Benutzer */
			break;
		}
		
		cArr[i] = c;	/* eingelesenes Zeichen im Array abspeichern */
		i++;	
	} while (c != EOF && i < size - 1);	/* Array-Laenge und Platz fuer Nullbyte pruefen */
	
	cArr[i] = '\0';	/* Nach der Eingabeschleife die Zeichenkette terminieren */
}

int main() {
	char charArr [81];	/* 80 Zeichen einer Bildschirmzeile + 1 Platz fuer das Nullbyte  */
	
	printf("Bitte Zeichen eingeben, Ende mit STRG-D: ");
	printf("sizeof(charArr) = %lu\n", sizeof(charArr));
	
	eingabe(charArr, sizeof(charArr));	/* ausgelagerte Zeilen in der Funktion aufrufen */
	
	printf("\nEingabe: |%s|\n", charArr);	/* Kontrollausgabe der Eingabe */

	return 0;
}

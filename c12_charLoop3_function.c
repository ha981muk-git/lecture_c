/* C-Demoprogramm fuer eine Buchstaben-Bearbeitungsschleife */

/*
„Schreiben Sie ein Programm, welches von der Tastatur Buchstaben
einliest, und diese wieder auf dem Bildschirm ausgibt, bis an der Tastatur
der Abbruch veranlasst wird.“
*/

#include <stdio.h>

char umsetzeZeichen(char buch) {

	switch (buch) {
		case 'A':
		case 'a': buch = '@'; break;
		case 'E':
		case 'e': buch = '3'; break;
		case 'I':
		case 'i': buch = '!'; break;
		case 'O':
		case 'o': buch = '0'; break;
		case 'U':
		case 'u': buch = '_'; break;
		default: break;	/* bei den anderen Werten keine Aktion */
	}
		
	return buch;	/* umgesetztes Zeichen zurueckgeben */
}

int main() {
	char buchst;	/* Zeichen-Variable (1 Zeichen) */
	
	/* unser Tun ankuendigen, Benutzer informieren */
	printf("Bitte Zeichen eingeben (Ende mit STRG-D): ");
	
	do {
		buchst = getchar();
		
		if (buchst == EOF) {
			break;		/* Abbruch wenn EOF erkannt */
		}
		
		/* Zeichen umsetzen */
		
		buchst = umsetzeZeichen(buchst);	/* Aufruf der Umsetzfunktion */
		
		putchar(buchst);

	} while (buchst != EOF);	/* solange nicht End Of File (sicherheitshalber) */

	return 0;
}

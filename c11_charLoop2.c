/* C-Demoprogramm fuer eine Buchstaben-Bearbeitungsschleife */

/*
„Schreiben Sie ein Programm, welches von der Tastatur Buchstaben
einliest, und diese wieder auf dem Bildschirm ausgibt, bis an der Tastatur
der Abbruch veranlasst wird.“
*/

#include <stdio.h>

int main() {
	char buchst;	/* Zeichen-Variable (1 Zeichen) */
	
	/* unser Tun ankuendigen, Benutzer informieren */
	printf("Bitte Zeichen eingeben (Ende mit STRG-D): ");
	
	do {
		buchst = getchar();
		
		if (buchst == EOF) {
			break;		/* Abbruch wenn EOF erkannt */
		}
		
		/* Zeichen umsetzen (Vokale) */
		
		switch (buchst) {
			case 'A':	/* auch die Grossbuchstaben-Vokale umsetzen */
			case 'a': buchst = '@'; break;
			case 'E':
			case 'e': buchst = '3'; break;
			case 'I':
			case 'i': buchst = '!'; break;
			case 'O':
			case 'o': buchst = '0'; break;
			case 'U':
			case 'u': buchst = '_'; break;
			default: break;	/* bei den anderen Werten keine Aktion */
		}
		
		putchar(buchst);

	} while (buchst != EOF);	/* solange nicht End Of File (sicherheitshalber) */

	return 0;
}

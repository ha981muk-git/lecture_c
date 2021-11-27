/* C-Demoprogramm fuer die switch-Kontrollstruktur mit einem enum (Aufzaehlungstyp) */

#include <stdio.h>

enum Wochentag {Montag=1, Dienstag, Mittwoch, Donnerstag, Freitag, Samstag, Sonntag}; /* Definition Aufzaehlungstyp */

int main() {
	enum Wochentag wochentag;		/* Variable des enum-Typs */
	
	for (wochentag = Montag; wochentag <=Sonntag; wochentag++) {
		printf("Wochentag = %i\n", wochentag);
		
		switch (wochentag) {
			case Montag: printf("Wochentag = Montag\n"); break;
			case Dienstag: printf("Wochentag = Dienstag\n"); break;
			case Mittwoch: printf("Wochentag = Mittwoch\n"); break;
			case Donnerstag: printf("Wochentag = Donnerstag\n"); break;
			case Freitag: printf("Wochentag = Freitag\n"); break;
			case Samstag: printf("Wochentag = Samstag\n"); break;
			case Sonntag: printf("Wochentag = Sonntag\n"); break;
			default: printf("Wochentag = %i: ungueltiger Wert\n", wochentag); break; /* cannot happen */
		}
	}

	return 0;
}

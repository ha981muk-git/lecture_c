/* C-Demoprogramm fuer die switch-Kontrollstruktur */

#include <stdio.h>

int main() {
	int wochentag;
	
	for (wochentag = 0; wochentag <=9; wochentag++) {	/* for-Schleife mit fehlerhaften Grenzen */
		printf("Wochentag = %i\n", wochentag);
		
		switch (wochentag) {
			case 1: printf("Wochentag = Montag\n"); break;
			case 2: printf("Wochentag = Dienstag\n"); break;
			case 3: printf("Wochentag = Mittwoch\n"); break;
			case 4: printf("Wochentag = Donnerstag\n"); break;
			case 5: printf("Wochentag = Freitag\n"); break;
			case 6: printf("Wochentag = Samstag\n"); break;
			case 7: printf("Wochentag = Sonntag\n"); break;
			default: printf("Wochentag = %i: ungueltiger Wert\n", wochentag); break; /* cannot happen */
		}
	}

	return 0;
}

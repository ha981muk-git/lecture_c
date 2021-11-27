/* C-Demoprogramm fuer eine Struktur */

#include <stdio.h>
#include <string.h>

struct artikel {
	int artNum;	/* ganzzahlige Artikelnummer */
	char name[81];	/* Artikelbezeichnung */
	double preis;
};

int main() {
	struct artikel sortiment[10] = {	/* Array aus Strukturen mit Initialisierungsliste */
		{1, "Corona Export", 4.20},
		{42, "Gummiente Schorsch", 9.99},
		{99, "", -2.11},
		{1111, "Pappnase Karneval", 11.11}
	};
	int i;		/* Schleifenvariable */
	
	for(i=0; i < 10; i++) {
		printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			sortiment[i].artNum, sortiment[i].name, sortiment[i].preis);
	}

	return 0;
}

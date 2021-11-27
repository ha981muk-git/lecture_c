/* C-Demoprogramm fuer eine Struktur */

#include <stdio.h>
#include <string.h>

struct artikel {
	int artNum;	/* ganzzahlige Artikelnummer */
	char name[81];	/* Artikelbezeichnung */
	double preis;
};

int main() {
	struct artikel bier;
	
	bier.artNum = 1;	/* Artikelnummer setzen */
	strncpy(bier.name, "Corona Export", sizeof(bier.name));
	bier.preis = 4.20;
	
	printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			bier.artNum, bier.name, bier.preis);

	return 0;
}

/* C-Demoprogramm fuer eine Struktur mit Zugriff ueber Zeiger */
/* mit Beschaffung des Speicherplatzes durch malloc() */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>	/* wegen malloc() und free() */

struct artikel {
	int artNum;	/* ganzzahlige Artikelnummer */
	char name[81];	/* Artikelbezeichnung */
	double preis;
};

int main() {
	struct artikel * p_bier;	/* Zeiger auf die Struktur */
	
	p_bier = malloc(sizeof(struct artikel));/* passenden Speicher besorgen */
	
	p_bier->artNum = 1;	/* Artikelnummer setzen */
	strncpy(p_bier->name, "Corona Export", sizeof(p_bier->name));
	p_bier->preis = 4.20;
	
	printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p_bier->artNum, p_bier->name, p_bier->preis);

	free(p_bier);		/* wer malloc() sagt, muss auch free() sagen */
	
	return 0;
}

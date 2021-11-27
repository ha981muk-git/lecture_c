/* C-Demoprogramm fuer eine verkettete Liste aus Strukturen mit Zugriff ueber Zeiger */
/* mit einer Container-Struktur "node" */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>	/* wegen malloc() und free() */

#define NIL	(struct node *)0

struct artikel {
	int artNum;	/* ganzzahlige Artikelnummer */
	char name[81];	/* Artikelbezeichnung */
	double preis;
};

struct node {		/* Struktur fuer einen Knoten der verketteten Liste */
	struct artikel art;	/* "Nutzlast" des Knotens */
	struct node * p_next;	/* Zeiger auf das naechste Listenelement */
};


int main() {
	struct node * p_first;	/* Zeiger auf den Start der Kette */
	
	p_first = malloc(sizeof(struct node));/* passenden Speicher besorgen */
	
	p_first->art.artNum = 1;	/* Artikelnummer setzen */
	strncpy(p_first->art.name, "Corona Export", sizeof(p_first->art.name));
	p_first->art.preis = 4.20;
	
	p_first->p_next = NIL;		/* Kettenende signalisieren */
	
	printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p_first->art.artNum, p_first->art.name, p_first->art.preis);

	free(p_first);		/* wer malloc() sagt, muss auch free() sagen */
	
	return 0;
}

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

struct node * newElement(int aNum, char * aNam, double aPreis) {
	struct node * p_help;
	
	p_help = malloc(sizeof(struct node));/* passenden Speicher besorgen */
	
	p_help->art.artNum = aNum;	/* Artikelnummer setzen */
	strncpy(p_help->art.name, aNam, sizeof(p_help->art.name));
	p_help->art.preis = aPreis;
	
	p_help->p_next = NIL;		/* Kettenende signalisieren */
	
	return p_help;
}

int main() {
	struct node * p_first;	/* Zeiger auf den Start der Kette */
	
	p_first = newElement(1, "Corona Export", 4.20);	/* erstes Kettenelement erzeugen lassen */
	
	printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p_first->art.artNum, p_first->art.name, p_first->art.preis);

	free(p_first);		/* wer malloc() sagt, muss auch free() sagen */
	
	return 0;
}
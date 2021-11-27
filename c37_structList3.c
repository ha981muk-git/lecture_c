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

void printList(struct node * p) {	/* ganze Liste rekursiv ausgeben */
	printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p->art.artNum, p->art.name, p->art.preis);
	if (p->p_next != NIL) {
		printList(p->p_next);
	}
}

void deleteList(struct node * p) {	/* ganze Liste rekursiv loeschen */
	if (p->p_next != NIL) {
		deleteList(p->p_next);
	}
	printf("loesche Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p->art.artNum, p->art.name, p->art.preis);
	free(p);		/* wer malloc() sagt, muss auch free() sagen */
}

int main() {
	struct node * p_first;	/* Zeiger auf den Start der Kette */
	struct node * p_act;	/* Zeiger auf das aktuelle Element der Kette */
	
	/* erstes Kettenelement erzeugen lassen */
	p_act = p_first = newElement(1, "Corona Export", 4.20);	

	p_act->p_next = newElement(42, "Gummiente Schorsch", 9.99); /* zweites Kettenelement */
	p_act = p_act->p_next;	/* aktuellen Zeiger weiterschalten */
	
	p_act->p_next = newElement(99, "", -2.11); /* drittes Kettenelement */
	p_act = p_act->p_next;	/* aktuellen Zeiger weiterschalten */
	
	p_act->p_next = newElement(1111, "Pappnase Karneval", 11.11); /* viertes Kettenelement */
	p_act = p_act->p_next;	/* aktuellen Zeiger weiterschalten */
	
	/* ganze Kette ausgeben */
	
	printList(p_first);
	
	/* for (p_act = p_first; p_act != NIL; p_act = p_act->p_next) {
		printf("Artikel: Nummer: %i, Bezeichnung: %s, Preis: %6.2lf\n",
			p_act->art.artNum, p_act->art.name, p_act->art.preis);
	} */

	/* ganze Kette aufloesen */
	
	deleteList(p_first);
	
	return 0;
}

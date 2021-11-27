/* C-Demoprogramm fuer ein Integer-Array mit Uebergabe des Arrays an eine Funktion */
/* Aufgabe: Funktion max(), die den groessten Wert im Array liefern soll */ 
/* Pointer: max() soll Zeiger verwenden; Version "elegant" mit Laufzeiger */ 

#include <stdio.h>

int max(int * ip, int anzElem) {	/* Uebergabe des Arrays (Start) und der Anzahl der Elemente */
	int maximum = *ip;		/* Startwert der Suche: erstes Element ueber Dereferenzierung */
	
	while(--anzElem) {		/* Schleife ab dem 2. Element dews Arrays */
		if (*(++ip) > maximum) {
			maximum = *ip;	/* neues maximum gefunden */
		}
	}
	
	return maximum;			/* echte Rueckgabewert */
}

#define	ARRLEN 10			/* Groesse des Arrays vordefinieren */
					/* als Praeprozessor-Konstante */
int main() {
	int intArr [ARRLEN] = {42, -1, 1234, 0, -123, 17, 1, -12, 998765, 17 };
					/* Array aus Ganzzahlen mit Initialisierung */
	int i = 0;			/* Schleifenvariable */
	int * intp;			/* Zeiger auf Ganzzahl */
	
	intp = intArr;			/* Zeiger auf das Array richten */
	
	//*(intp+5) = 999999;		/* Dereferenzierung: Aendern des Wertes ueber die Indirektion */
	
	intp += 5;			/* Zeiger "weiterschalten" (Inkrement) */
	*intp = 777777;
	
	for(i=0; i < ARRLEN ; i++) {	/* Ausgabe-Schleife */
		printf("intArr[%i] = %i\n", i, intArr[i]);
	}
	
	printf("Maximalwert: %i\n", max(intArr, ARRLEN));

	return 0;
}

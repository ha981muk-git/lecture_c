/* C-Programm fuer einen einfachen Tischrechner der Grundrechenarten */
/* Erkennung derOperation anhand des Aufrufnamens des Programms */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "myCalc.h"

int main(int argc, char *argv[])
{
	int (*funcp) ();		/* Zeiger auf eine Funktion vom Typ int */
	char prognam [1024];
	int lhs, rhs;
	
	printf("1) Das Programm |%s| hat %i Argumente\n", argv[0], argc);
	
	/* Netto-Programmname herstellen */

	if (strrchr(argv[0], '/')) {
		strncpy(prognam, strrchr(argv[0], '/')+1, sizeof(prognam));
	}
	else {
		strncpy(prognam, argv[0], sizeof(prognam));
	}
	
	printf("2) Das Programm |%s| hat %i Argumente\n", prognam, argc);
	
	/* Anzahl der Argumente ueberpruefen (es muessen 2 Operanden sein) */
	
	if (argc != 3) {	/* argc muss 3 sein */
		printf("%s: %s braucht genau 2 Aufrufargumente\n", prognam, prognam);
		
		return 22;
	}
	
	/* Argumentwerte bestimmen */
	
	lhs = atoi(argv[1]);	/* erstes Argument in Ganzzahl verwandeln */
	rhs = atoi(argv[2]);	/* zweites Argument in Ganzzahl verwandeln */
	
	printf("Die Werte der beiden Operanden sind: %i und %i\n", lhs, rhs);
	
	/* Anhand des Aufrufnamens die Operation bestimmen und rechnen */
	
	if (strncmp(prognam, "add", sizeof(prognam)) == 0) {	/* es ist add */
		funcp = add;	/* Zeiger auf die Funktion add() richten */
	}
	else if (strncmp(prognam, "subt", sizeof(prognam)) == 0) {
		funcp = subt;
	}
	else if (strncmp(prognam, "mult", sizeof(prognam)) == 0) {
		funcp = mult;
	}
	else if (strncmp(prognam, "divi", sizeof(prognam)) == 0) {
		funcp = divi;
	}
	else if (strncmp(prognam, "mod", sizeof(prognam)) == 0) {
		funcp = modulo;
	}
	else {		/* keine Operation gewaehlt */
		printf("%s: keine der Operationen add, subt, mult, divi oder mod gewaehlt, Abbruch\n", prognam);
		return 1;
	}
	
	printf("Das Ergebnis der Operation %s von %i und %i ist %i\n",
			prognam, lhs, rhs, funcp(lhs, rhs, prognam));	
			/* Funktion ueber den Funktionszeiger aufrufen */
	return 0;
}

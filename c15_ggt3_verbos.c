/* C-Demoprogramm fuer die Rekursion am Beispiel ggt() nach Euklid */
/* verbose Version mit Zwischenausgaben */

#include <stdio.h>

int ggT(int x, int y)
{
	int helpme;	/* Ergebnispuffer */
	
	if (x == y) {
		printf ("*** gefunden: x = %i\n", x);
		return x;
	} else {
		if (x > y) {
			printf ("Aufruf ggt(%i, %i)\n", x - y, y);
			helpme = ggT(x - y, y);
			printf ("zurueck aus ggt(%i, %i), helpme = %i\n", x - y, y, helpme);
			return helpme;
		} else {
			printf ("Aufruf ggt(%i, %i)\n", x, y - x);
			helpme = ggT(x, y - x);
			printf ("zurueck aus ggt(%i, %i), helpme = %i\n", x, y - x, helpme);
			return helpme;
		}
	}
}

int main()
{
	int x = 3333333, y = 3;

	printf("ggT von %d und %d ist %d\n", x, y, ggT(x, y));
}

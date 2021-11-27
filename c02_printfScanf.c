/* C-Demoprogramm fuer die Verwendung von scanf() und printf() */

#include <stdio.h>

int main() {
	int ganz1 = 0;
	double gleit1 = 0.0;
	
	printf("Bitte eine Ganzzahl eigeben: ");
	scanf("%i", &ganz1);
	
	printf("Der Wert von ganz1 ist: %i\n", ganz1);
	
	
	printf("Bitte eine Gleitkommazahl eigeben: ");
	scanf("%lf", &gleit1);
	
	printf("Der Wert von gleit1 ist: %lf\n", gleit1);
	
	return 0;
}

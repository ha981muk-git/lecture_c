#include <stdio.h>
#include <stdlib.h>

int divi(int lhs, int rhs, char * prognam) {
	if (rhs == 0) {
		printf("%s: Nulldivision verhindert\n", prognam);
		exit (136);	/* Nulldivisionsfehler signalisieren */
	}
	return lhs / rhs;
}

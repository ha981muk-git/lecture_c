/* C-demoprogramm fuer die Ungenauigkeit von Gleitkommazahlen */

#include <stdio.h>

int main() {
	float float1 = 123456789.0;	/* 32-Bit float ist mit 24 Bit Mantisse */
	float float2 = 0.123456789;
	
	printf("float1: %22.12f, float2: %22.12f\n  Summe: %22.12f\n",
				float1, float2, float1+float2);

	return 0;
}

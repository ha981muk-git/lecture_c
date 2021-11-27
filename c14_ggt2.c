/* C-Demoprogramm fuer die Rekursion am Beispiel ggt() nach Euklid */

#include <stdio.h>

int ggT(int x, int y)
{
	if (x == y) {
		return x;
	} else {
		if (x > y) {
			return ggT(x - y, y);
		} else {
			return ggT(x, y - x);
		}
	}
}

int main()
{
	int x = 105, y = 42;

	printf("ggT von %d und %d ist %d\n", x, y, ggT(x, y));
}

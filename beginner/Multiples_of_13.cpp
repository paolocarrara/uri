#include <stdio.h>

int main (void)
{
	int x, y, aux, i;
	scanf ("%i %i", &x, &y);

	if (x > y) {
		aux = y;
		y = x;
		x = aux;
	}

	for (i = x, aux = 0; i <= y; i++) {
		if (i%13 != 0) {
			aux += i;
		}	
	}
	printf ("%i\n", aux);

	return 0;
}

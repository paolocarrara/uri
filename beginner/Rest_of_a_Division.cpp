#include <stdio.h>

int main (void)
{
	int x, y, aux, i;
	scanf ("%i %i", &x, &y);

	if ( y < x) {
		aux = x;
		x = y;
		y = aux;
	}

	for (i = x+1; i < y; i++) {
		if (i%5 == 2 || i%5 == 3)
			printf ("%i\n", i);
	}
	

	return 0;
}

#include <stdio.h>

int main (void)
{
	int x, y, aux;

	x = 1;
	y = 1;

	while (x > 0 && y > 0) {
		scanf ("%i %i", &x, &y);
		if (x > 0 && y > 0) {
			if (x > y) {
				aux = y;
				y = x;
				x = aux;
			}
			for (aux = 0; x <= y; x++) {
				printf ("%i ", x);
				aux +=x;
			}
			printf ("Sum=%i\n", aux);
		}
	}

	return 0;
}

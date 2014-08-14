#include <stdio.h>

int main (void) {

	int n, a, b, aux;

	scanf ("%i", &n);

	while (n-->0) {
		scanf ("%i %i", &a, &b);

		if (a%2 == 0)
			a++;

		for (aux = 0; b-->0; a+=2) {
			aux += a;
		}

		printf ("%i\n", aux);

	}

	return 0;
}

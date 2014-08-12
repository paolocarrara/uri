#include <stdio.h>

int main (void)
{
	int m, n, o, aux;
	scanf ("%i %i", &m, &n);

	while (n <= m) {
		scanf ("%i", &n);
	}
	
	o = 1;
	aux = m+1;
	while (m < n) {
		m += aux;
		o++;
		aux++;
	}

	printf ("%i\n", o);

	return 0;
}

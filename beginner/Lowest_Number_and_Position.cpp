#include <stdio.h>

int main (void)
{
	int n, m, i, lowest, pos;

	scanf ("%i", &n);

	scanf ("%i", &lowest);
	pos = 0;

	for (i = 1; i < n; i++) {
		scanf ("%i", &m);
		if (m < lowest) {
			lowest = m;
			pos = i;
		}
	}
	printf ("Menor valor: %i\nPosicao: %i\n", lowest, pos);

	return 0;
}

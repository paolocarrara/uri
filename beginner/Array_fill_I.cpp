#include <stdio.h>

int main (void)
{
	int N[10];
	int n, i;

	scanf ("%i", &n);

	N[0] = n;

	for (i = 1; i < 10; i++) {
		N[i] = N[i-1]*2;
	}

	for (i = 0; i < 10; i++) {
		printf ("N[%i] = %i\n", i, N[i]);
	}

	return 0;
}

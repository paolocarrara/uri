#include <stdio.h>

int main (void)
{
	unsigned long int a, b, f[61];
	int i, j, n;

	a = 0;
	b = 1;

	for (i = 0; i < 61; i++) {
		f[i] = a;
		a = b;
		b = f[i]+b;
	}
	
	scanf ("%i", &n);

	while (n-->0) {

		scanf ("%i", &i);
		printf ("Fib(%i) = %lu\n", i, f[i]);
	}

	return 0;
}

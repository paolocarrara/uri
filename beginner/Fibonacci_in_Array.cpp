#include <stdio.h>

int main (void)
{
	unsigned long int a, b, m;
	int i, j, n;

	scanf ("%i", &n);

	while (n-->0) {

		scanf ("%i", &i);
		j = i;

		a = 0;
		b = 1;

		while (i-->0) {
			m = a;
			a = b;
			b = m+b;
		}
		printf ("Fib(%i) = %lu\n", j, a);
	}

	return 0;
}

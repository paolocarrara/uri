#include <stdio.h>

int main (void)
{
	int a, b, n, m, i;
	scanf ("%i", &n);

	a = 0;
	b = 1;

	for (i = 0; i < n-1; i++) {
		if (i == 0)
			printf ("0 ");
		if (i == 1)
			printf ("1 ");
		else {
			printf ("%i ", a+b);
			m = a;
			a = b;
			b = m+b;
		}
	}
	printf ("%i\n", a+b);

	return 0;
}

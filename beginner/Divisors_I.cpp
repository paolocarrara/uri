#include <stdio.h>

int main (void)
{
	int n, i, q;
	scanf ("%i", &n);

	for (i = 1, q = n/2; i <= q; i++)
		if (n%i == 0)
			printf ("%i\n", i);
	printf ("%i\n", n);

	return 0;
}

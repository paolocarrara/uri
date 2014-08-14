#include <stdio.h>

int main (void)
{
	int n, i, c, q;
	
	scanf ("%i", &n);

	for (i = 1; i <= n; i++) {
		q = i*i;
		c = i*i*i;
		printf ("%i %i %i\n%i %i %i\n", i, q, c, i, q+1, c+1);
	}

	return 0;
}

#include <stdio.h>

int main (void)
{
	int n, i;
	
	for (i = 0; i < 10; i++) {
		scanf ("%i", &n);
		if (n <= 0)
			n = 1;
		printf ("X[%i] = %i\n", i, n);
	}

	return 0;
}

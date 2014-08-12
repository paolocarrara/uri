#include <stdio.h>

int main (void)
{
	int a, n, sum;
	scanf ("%i %i", &a, &n);
	
	while (n <= 0) {
		scanf ("%i", &n);
	}
	
	for (sum = 0; n-->0; a++) {
		sum += a;
	}

	printf ("%i\n", sum);

	return 0;
}

#include <stdio.h>

int main (void) /*rever*/
{
	float n;
	int i;

	for (i = 0; i < 100; i++) {
		scanf ("%f", &n);
		if (n <= 10.0)
			printf ("A[%i] = %0.1f\n", i, n);
	}

	return 0;
}

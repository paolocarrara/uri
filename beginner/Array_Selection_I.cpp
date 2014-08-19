#include <stdio.h>

int main (void) /*rever*/
{
	float n;
	int i;
	int intpart;
	float floatpart;

	for (i = 0; i < 100; i++) {
		scanf ("%f", &n);
		if (n <= 10.0) {
			intpart = (int)n;
			floatpart = n - intpart;
			if (floatpart == 0)
				printf ("A[%i] = %i\n", i, intpart);
			else
				printf ("A[%i] = %0.1f\n", i, n);
		}
	}

	return 0;
}

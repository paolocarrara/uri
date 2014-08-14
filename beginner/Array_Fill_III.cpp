#include <stdio.h>

int main (void)
{
	double n;
	int i;
	scanf ("%lf", &n);

	for (i = 0; i < 100; i++, n /= 2.0) {
		printf ("N[%i] = %0.4lf\n", i, n);
	}

	return 0;
}

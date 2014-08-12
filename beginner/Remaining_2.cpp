#include <stdio.h>

int main (void)
{
	int n, i;

	scanf ("%i", &n);

	if (n > 2) {
		printf ("2\n");
		for (i = n + 2; i < 10000; i += n) {
			printf ("%i\n", i);
		}
	}

	return 0;
}

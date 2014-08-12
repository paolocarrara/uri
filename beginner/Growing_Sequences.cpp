#include <stdio.h>

int main (void)
{
	int n, i;
	n = -1;
	while (n != 0) {
		scanf ("%i", &n);
		if (n != 0) {
			for (i = 1; i < n; i++) {
				printf ("%i ", i);
			}
			printf ("%i\n", n);
		}
	}

	return 0;
}

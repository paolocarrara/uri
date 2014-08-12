#include <stdio.h>

int main (void)
{
	int max = -1;
	int ndx = -1;
	int i, n;

	for (i = 1; i < 101; i++) {
		scanf ("%d", &n);
		if (n > max) {
			max = n;
			ndx = i;
		}
	}
	printf ("%i\n%i\n", max, ndx);

	return 0;
}

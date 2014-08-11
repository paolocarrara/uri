#include <stdio.h>

int main (void)
{
	int n, m, even;

	n = 5;
	even = 0;

	while (n-->0) {
		scanf("%i", &m);
		if (m%2 == 0)
			even++;
	}

	printf ("%i valores pares\n", even);

	return 0;
}

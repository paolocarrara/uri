#include <stdio.h>

int main (void)
{
	int m, n, i;

	scanf ("%i", &m);
	scanf ("%i", &n);

	for (i = 1; i <= n; i++) {
		printf ("%i", i);
		if (i%m == 0)
			putchar ('\n');
		else if (i != n)
			putchar (' ');
	}


	return 0;
}

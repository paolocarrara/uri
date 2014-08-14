#include <stdio.h>

int main (void)
{
	int n, i, q, t, m;
	
	scanf ("%i", &m);

	while (m-->0) {

		scanf ("%i", &n);

		for (i = 1, t = 0, q = n/2; i <= q; i++)
			if (n%i == 0)
				t += i;
		if (t == n)
			printf ("%i eh perfeito\n", n);
		else
			printf ("%i nao eh perfeito\n", n);
	}

	return 0;
}

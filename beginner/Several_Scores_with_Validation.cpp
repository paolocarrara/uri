#include <stdio.h>

int main (void)
{
	int a;
	float n, m;

	a = 1;

	while (a != 2) {
		if (a == 1) {
			n = -1.0;
			m = -1.0;
			while (n < 0.0 || n > 10.0) {
				scanf ("%f", &n);
				if (n < 0.0 || n > 10.0)
					puts ("nota invalida");
			}
			while (m < 0.0 || m > 10.0) {
				scanf ("%f", &m);
				if (m < 0.0 || m > 10.0)
					puts ("nota invalida");
			}

			printf ("media = %0.2f\n", (m+n)/2.0);

		}
			puts ("novo calculo (1-sim 2-nao)");
			scanf ("%i", &a);
	}

	return 0;
}

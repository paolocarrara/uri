#include <stdio.h>

int main (void)
{
	int ti, tp;
	int i[5], p[5];
	int c, d, tmp2, tmp;

	for (c = 0, ti = 0, tp = 0; c < 15; c++) {
		scanf ("%i", &tmp);
		tmp2 = tmp;
		if (tmp < 0) {
			tmp *= -1;
		}
		if (tmp%2 == 0) {
			p[tp++] = tmp2;
		}
		else {
			i[ti++] = tmp2;
		}
		if (tp == 5) {
			for (d = 0; d < tp; d++) {
				printf ("par[%i] = %i\n", d, p[d]);
			}
			tp = 0;
		}
		if (ti == 5) {
			for (d = 0; d < ti; d++) {
				printf ("impar[%i] = %i\n", d, i[d]);
			}
			ti = 0;
		}
	}

	if (ti > 0) {
		for (d = 0; d < ti; d++) {
			printf ("impar[%i] = %i\n", d, i[d]);
		}
	}
	if (tp > 0) {
		for (d = 0; d < tp; d++) {
			printf ("par[%i] = %i\n", d, p[d]);
		}
	}


	return 0;
}

#include <stdio.h>

int main (void)
{
	int i, j, k;
	char op;
	double m[12][12];
	double r;

	scanf ("%c", &op);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf ("%lf", &m[i][j]);
		}
	}

	r = 0;
	for (k = 2, i = 7; i < 12; i++, k+=2) {
		for (j = i - k; j < i; j++) {
			r+= m[i][j];
		}
	}

	if (op == 'S') {
		printf ("%0.1f\n", r);
	}
	else {
		printf ("%0.1f\n", r/(30*(1.0)));
	}

	return 0;
}

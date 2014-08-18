#include <stdio.h>

int main (void)
{
	int i, j, k;
	char op;
	float m[12][12];
	float r;

	scanf ("%c", &op);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf ("%f", &m[i][j]);
		}
	}

	r = 0;
	for (i = 7, k = 2; i < 12; i++, k+=2) {
		for (j = i - k; j < i; j++) {
			r+= m[j][i];
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

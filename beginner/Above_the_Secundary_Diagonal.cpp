#include <stdio.h>

int main (void)
{
	int i, j;
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
	for (i = 0; i < 11; i++) {
		for (j = 0; j < 11-i; j++) {
			r += m[i][j];
		}
	}



	if (op == 'S') {
		printf ("%0.1f\n", r);
	}
	else {
		printf ("%0.1f\n", r/(66*(1.0)));
	}

	return 0;
}

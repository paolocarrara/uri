#include <stdio.h>

int main (void)
{
	int column, i;
	char op;
	float m[144], r;

	scanf ("%i", &column);
	getchar ();
	scanf ("%c", &op);

	for (i = 0; i < 144; i++) {
		scanf ("%f", &m[i]);
	}

	r = 0;
	for (i = 0; i < 12; i++)
		r += m[column + i*12];

	if (op == 'S') {
		printf ("%0.1f\n", r);
	}
	else {
		printf ("%0.1f\n", r/(12*(1.0)));
	}

	return 0;
}

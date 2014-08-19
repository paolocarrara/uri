#include <stdio.h>

int main (void)
{
	float s;
	int i, j;

	s = 0;
	for (i = 1, j = 1; i < 39; i+=2, j*=2) {
		s += (i*(1.0))/(j*(1.0));
	}

	printf ("%0.2f\n", s);

	return 0;
}

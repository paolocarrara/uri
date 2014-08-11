#include <stdio.h>

int main (void)
{
	int a1, a2, b1, b2, c1, c2;
	scanf ("%i %i %i", &a1, &b1, &c1);
	a2 = a1;
	if (b1 > a1) {
		a2 = b1;
		b2 = a1;
	}
	else {
		b2 = b1;
	}
	if (c1 > a1) {
		c2 = b1;
		b2 = a1;
		a2 = c1;
	}
	else {
		c2 = c1;
	}
	printf ("%i\n%i\n%i\n\n", c2, b2, a2);
	printf ("%i\n%i\n%i\n", a1, b1, c1);
}

#include <stdio.h>

int main (void)
{
	int n, h;
	float s;
	scanf ("%i %i %f", &n, &h, &s);
	printf ("NUMBER = %i\nSALARY = U$ %0.2f\n", n, h*s);
	return 0;
}

#include <stdio.h>

int main (void)
{
	int i, n;
	float a, b, c, t;

	scanf ("%i", &n);
	
	while (n-->0) {
		scanf ("%f %f %f", &a, &b, &c);
		printf ("%0.1f\n", ( (a*2.0)+(b*3.0)+(c*5.0) )/(10.0));
	}

	return 0;
}

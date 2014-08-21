#include <stdio.h>

int main (void)
{
	float a, b, c, aux;

	scanf ("%f %f %f", &a, &b, &c);

	if (b > a) {
		aux = a;
		a = b;
		b = aux;
	}
	if (c > a) {
		aux = a;
		a = c;
		c = aux;
	}
	if (c > b) {
		aux = b;
		b = c;
		c = aux;
	}

	if (a < b + c) {
		printf ("Perimetro = %0.1f\n", a+b+c);
	}
	else {
		printf ("Area = %0.1f\n", (c*(a+b))/2);
	}

	return 0;
}

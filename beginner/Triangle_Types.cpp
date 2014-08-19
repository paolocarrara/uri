#include <stdio.h>

int main (void)
{
	double a, b, c, aux, a2, b2, c2;
	
	scanf ("%lf %lf %lf", &a, &b, &c);

	if (c > a) {
		aux = a;
		a = c;
		c = aux;
	}
	if (b > a) {
		aux = a;
		a = b;
		b = aux;
	}
	if (c > b) {
		aux = b;
		b = c;
		c = aux;
	}

	a2 = a*a;
	b2 = b*b;
	c2 = c*c;

	if (a >= b+c)
		printf ("NAO FORMA TRIANGULO\n");
	if (a2 == b2+c2)
		printf ("TRIANGULO RETANGULO\n");
	if (a2 > b2+c2)
		printf ("TRIANGULO OBTUSANGULO\n");
	if (a2 < b2+c2)
		printf ("TRIANGULO ACUTANGULO\n");
	if (a == b && a == c)
		printf ("TRIANGULO EQUILATERO\n");
	else if (a == b || a == c || b == c)
		printf ("TRIANGULO ISOSCELES\n");

	return 0;
}

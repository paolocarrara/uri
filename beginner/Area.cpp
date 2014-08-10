#include <stdio.h>

#define	PI	3.14159

#define triangulo(a, c) ((a*c)/2.0)
#define circulo(c) (PI*c*c)
#define trapezio(a, b, c) (((a+b)*c)/2.0)
#define quadrado(b) (b*b)
#define retangulo(a, b) (a*b)

int main (void)
{
	float a, b, c;
	scanf ("%f %f %f", &a, &b, &c);
	printf ("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n", triangulo(a, c), circulo(c), trapezio(a, b, c), quadrado(b), retangulo(a, b));
	return 0;
}

#include <stdio.h>

int main (void)
{
	int id, quant;
	float v, t;
	scanf ("%i %i %f", &id, &quant, &v);
	t = quant*v;
	scanf ("%i %i %f", &id, &quant, &v);
	t += quant*v;
	printf ("VALOR A PAGAR: R$ %0.2f\n", t);
	return 0;
}
